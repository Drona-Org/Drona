#include "PX4Communicator.h"

PRT_MACHINEINST* PX4ModelMachine = NULL;
PRT_MACHINEINST* PX4Communicator::POrbMachine = NULL;
void PX4Communicator::SendToPOrb(PRT_INT32 topic, PRT_INT32 px4_event, PRT_VALUE* px4_payload)
{
    if (PX4Communicator::POrbMachine != NULL)
    {
        static PRT_VALUE* eventName = PrtMkEventValue(P_EVENT_POrbPublish);
        PRT_VALUE* ev_val = PrtMkEventValue(px4_event);
        PRT_VALUE* topic_val = PrtMkIntValue(topic);
        PRT_VALUE* pay_val = PrtMkDefaultValue(&P_GEND_TYPE_POrbPubMsgType);
        PrtTupleSetEx(pay_val, 0, topic_val, PRT_FALSE);
        PrtTupleSetEx(pay_val, 1, ev_val, PRT_FALSE);
        PrtTupleSetEx(pay_val, 2, px4_payload, PRT_TRUE);
        PrtSend(NULL, PX4Communicator::POrbMachine, eventName, 1, PRT_FUN_PARAM_MOVE, &pay_val);

        // this allows timers to fire on this thread, otherwise the mavlink channel keeps us so busy
        // there is no time for the timers.
        usleep(10);
    }
}

void* PX4Communicator::DispatchMavLinkMessages(void* ptr) {

    PX4Communicator *px4 = (PX4Communicator*) ptr;
    int BUFFER_LENGTH = 255;
    BYTE buf[BUFFER_LENGTH];
    BYTE temp;

    //Declare all variables for optimization
    PRT_VALUE* pMessage_heartbeat = NULL;
    PRT_VALUE* pMessage_global_position = NULL;
    PRT_VALUE* pMessage_gps_raw = NULL;
    PRT_VALUE* pMessage_gps_status = NULL;
    PRT_VALUE* pMessage_attitute = NULL;
    PRT_VALUE* pMessage_battery_status = NULL;
    PRT_VALUE* pMessage_local_position_ned = NULL;
    PRT_VALUE* pMessage_command_ack = NULL;
    PRT_VALUE* pMessage_extended_sys_state = NULL;

    while(true) {
        memset(buf, 0, BUFFER_LENGTH);
        int recsize = px4->comm->Read(buf,BUFFER_LENGTH);

        SendHeartBeat(px4->comm);

        if (recsize > 0) {

            mavlink_message_t msg;
            mavlink_status_t status;

            for (int j = 0; j < recsize; ++j)
            {
                temp = buf[j];
                if (mavlink_frame_char(MAVLINK_COMM_0, buf[j], &msg, &status) != MAVLINK_FRAMING_INCOMPLETE)
                {
                     switch (msg.msgid) {
                        case MAVLINK_MSG_ID_HEARTBEAT:{
                            p_mavlink_msg_heartbeat_decode(&msg, &pMessage_heartbeat);
                            LOG("Heart beat received\n");
                            SendToPOrb(Topics_heartbeat_topic, P_EVENT_heartbeat, pMessage_heartbeat);
                            break;
                        }
                        case MAVLINK_MSG_ID_LOCAL_POSITION_NED:{
                            LOG("Local position received\n");
                            mavlink_local_position_ned_t curLocPos;
                            mavlink_msg_local_position_ned_decode(&msg, &curLocPos);
                            ROBOTSTATE->UpdateCurrentLocalPosition(curLocPos);

                            p_mavlink_msg_local_position_ned_decode(&msg, &pMessage_local_position_ned);
                            {
                                // reverse the z units so positive numbers go upwards.
                                PRT_VALUE* zAxis = PrtTupleGetNC(pMessage_local_position_ned, 3);
                                float zValue = PrtPrimGetFloat(zAxis);
                                PrtPrimSetFloat(zAxis, -zValue);
                            }
                            SendToPOrb(Topics_local_position_topic, P_EVENT_local_position, pMessage_local_position_ned);
                            break;
                        }
                        case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:{
                            mavlink_global_position_int_t curGlobPos;
                            mavlink_msg_global_position_int_decode(&msg, &curGlobPos);
                            ROBOTSTATE->UpdateCurrentGlobalPosition(curGlobPos);
                            break;
                        }
                        case MAVLINK_MSG_ID_RADIO_STATUS:{
                            //LOG("Radio status received");
                            mavlink_radio_status_t radioStatus;
                            mavlink_msg_radio_status_decode(&msg, &radioStatus);
                            ROBOTSTATE->UpdateRadioStatus(radioStatus);
                            break;
                        }
                        default:{
                            break;
                        }
                     }
                 }
            }
        }
    }

    //free all the prt values
    if (pMessage_heartbeat != nullptr) PrtFreeValue(pMessage_heartbeat);
    if (pMessage_global_position != nullptr) PrtFreeValue(pMessage_global_position);
    if (pMessage_attitute != nullptr) PrtFreeValue(pMessage_attitute);
    if (pMessage_battery_status != nullptr) PrtFreeValue(pMessage_battery_status);
    if (pMessage_local_position_ned != nullptr) PrtFreeValue(pMessage_local_position_ned);
    if (pMessage_command_ack != nullptr) PrtFreeValue(pMessage_command_ack);
    if (pMessage_gps_status != nullptr)  PrtFreeValue(pMessage_gps_status);
    if (pMessage_gps_raw != nullptr) PrtFreeValue(pMessage_gps_raw);
    if (pMessage_extended_sys_state != nullptr) PrtFreeValue(pMessage_extended_sys_state);
    return 0;
}

//   Time
uint64_t get_time_usec()
{
    static struct timeval _time_stamp;
    gettimeofday(&_time_stamp, NULL);
    return _time_stamp.tv_sec*1000000 + _time_stamp.tv_usec;
}

// Constructor for UDP
PX4Communicator::PX4Communicator(int simulatorPort){

    //Initialize the locals
    this->systemId = 255;
    this->autopilotId = 1;
    this->companionId = 1;
    this->isAutoPilot = false;

    //initialize the comm port
    this->comm = new UdpCommunicationSocket();
    comm->ReadFrom(simulatorPort);

    struct addrinfo hints;
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_DGRAM;
    hints.ai_protocol = IPPROTO_UDP;
    hints.ai_canonname = NULL;
    hints.ai_addr = NULL;
    hints.ai_next = NULL;
    hints.ai_flags = AI_PASSIVE;

    struct addrinfo *result_ = NULL;
    int rc = getaddrinfo("127.0.0.1", "0", &hints, &result_);
    if (rc != 0) {
        printf("getaddrinfo failed with error: %d\n", rc);
    }
    for (struct addrinfo *ptr = result_; ptr != NULL; ptr = ptr->ai_next)
    {
        if (ptr->ai_family == AF_INET && ptr->ai_socktype == SOCK_DGRAM && ptr->ai_protocol == IPPROTO_UDP)
        {
            // found it!
            sockaddr_in* sptr = (sockaddr_in*)ptr->ai_addr;
            comm->writeAddr.sin_family = sptr->sin_family;
            comm->writeAddr.sin_addr.s_addr = sptr->sin_addr.s_addr;
            comm->writeAddr.sin_port = 0; // don't know yet.
            break;
        }
    }

    freeaddrinfo(result_);



    //Start the reading thread.
    pthread_t readThread;
    int result = pthread_create(&readThread, NULL, DispatchMavLinkMessages, this);
    if(result != 0)
    {
        ERROR("Failed to create the dispatch thread");
    }
    while(comm->writeSock == INVALID_SOCKET);
}


void PX4Communicator::SendHeartBeat(Port* server){

    mavlink_message_t msg;
    BYTE buf[255];
    mavlink_msg_heartbeat_pack(255, 1, &msg, MAV_TYPE_GCS,MAV_AUTOPILOT_INVALID, MAV_MODE_MANUAL_ARMED, 0, MAV_STATE_ACTIVE);
    int len = mavlink_msg_to_send_buffer(buf, &msg);
    server->Write(buf,len);
}



bool PX4Communicator::StartAutoPilot(){

    if(this->isAutoPilot){
        LOG("PX4Communicator::StartWrite is already writing");
        return true;
    }

    this->isAutoPilot = true;

    pthread_t writeThread;
    int result = pthread_create(&writeThread, NULL, WriteSetPointThread, this);
    if(result != 0)
    {
        ERROR("Failed to create the write thread");
        return false;
    }
    return true;
}


bool PX4Communicator::StopAutoPilot(){

    if(!this->isAutoPilot){
        LOG("PX4Communicator::StopWrite is already not writing");
        return true;
    }

    this->isAutoPilot = false;
    return true;
}


//Set target position
void PX4Communicator::SetTargetLocalPosition(float x, float y, float z){

    mavlink_set_position_target_local_ned_t sp;

    sp.time_boot_ms = 0;
    sp.type_mask = MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_POSITION & MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_ANGLE;
    sp.coordinate_frame = MAV_FRAME_LOCAL_NED;
    sp.x = x;
    sp.y = y;
    sp.z = z;
    sp.yaw = 0;

    this->targetSetpoint = sp;

    char buff[100];
    sprintf(buff,"Command: Set position (x %f, y %f, z %f)", sp.x, sp.y, sp.z);
    LOG(buff);
}




// Write setpoint
void PX4Communicator::WriteSetpoint(){

    // Get current target setpoint
    mavlink_set_position_target_local_ned_t sp = this->targetSetpoint;

    // double check some system parameters
    if ( not sp.time_boot_ms ){
        sp.time_boot_ms = (uint32_t) (get_time_usec()/1000);
    }

    sp.target_system    = this->companionId;
    sp.target_component = this->autopilotId;

    // Encode message
    mavlink_message_t msg;
    mavlink_msg_set_position_target_local_ned_encode(this->systemId, this->autopilotId, &msg, &sp);

    // Write message
    int len = this->WriteMessage(msg);

    if ( len <= 0 ){
        LOG("WARNING Command: Could not send target set point");
    }
    else{
        //LOG("Command: Write setpoint");
    }

    return;
}

// Send command to server
int PX4Communicator::WriteMessage(mavlink_message_t msg){


    BYTE buf[300];
    int len = mavlink_msg_to_send_buffer(buf, &msg);

    this->comm->Write(buf,len);

    // TODO it's a fake len
    return len;
}


void* PX4Communicator::WriteSetPointThread(void* args){

    PX4Communicator *px4 = (PX4Communicator*) args;
    while(px4->isAutoPilot){
        usleep(175000);   // Read at 2Hz
        px4->WriteSetpoint();
        SendHeartBeat(px4->comm);
    }
    pthread_exit(NULL);
}




