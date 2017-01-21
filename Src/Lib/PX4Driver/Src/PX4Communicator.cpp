#include "PX4Communicator.h"

//   Time
uint64_t get_time_usec()
{
    static struct timeval _time_stamp;
    gettimeofday(&_time_stamp, NULL);
    return _time_stamp.tv_sec*1000000 + _time_stamp.tv_usec;
}

// Constructor
PX4Communicator::PX4Communicator(int simulatorPort){

    this->server = new UdpCommunicationSocket();

    struct addrinfo hints;
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_DGRAM;
    hints.ai_protocol = IPPROTO_UDP;

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
            server->writeAddr.sin_family = sptr->sin_family;
            server->writeAddr.sin_addr.s_addr = sptr->sin_addr.s_addr;
            server->writeAddr.sin_port = 0; // don't know yet.
            break;
        }
    }

    freeaddrinfo(result_);

    server-> ReadFrom(simulatorPort);

    this->systemId = 255;
    this->autopilotId = 1;
    this->companionId = 1;

    this->writing = false;

    pthread_t readThread;
    int result = pthread_create(&readThread, NULL, DispatchMavLinkMessages, this);
    if(result != 0)
    {
        ERROR("Failed to create the dispatch thread");
    }
    while(server->writeSock == INVALID_SOCKET);
}


void PX4Communicator::HeartBeat(UdpCommunicationSocket* server){

    mavlink_message_t msg;
    BYTE buf[255];
    mavlink_msg_heartbeat_pack(255, 1, &msg, MAV_TYPE_GCS,MAV_AUTOPILOT_INVALID, MAV_MODE_MANUAL_ARMED, 0, MAV_STATE_ACTIVE);
    int len = mavlink_msg_to_send_buffer(buf, &msg);
    server->Write(buf,len);
}

void* PX4Communicator::DispatchMavLinkMessages(void* ptr) {

    PX4Communicator *px4 = (PX4Communicator *) ptr;
    int BUFFER_LENGTH = 255;
    BYTE buf[BUFFER_LENGTH];
    BYTE temp;
    while(true) {
        memset(buf, 0, BUFFER_LENGTH);
        int recsize = px4->server->Read(buf,BUFFER_LENGTH);

        HeartBeat(px4->server);

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
                            //LOG("Heart beat received");
                            HeartBeat(px4->server);
                            break;
                        }
                        case MAVLINK_MSG_ID_LOCAL_POSITION_NED:{
                            //LOG("Local position received");
                            mavlink_local_position_ned_t curLocPos;
                            mavlink_msg_local_position_ned_decode(&msg, &curLocPos);
                            px4->UpdateCurrentLocalPosition(curLocPos);
                            break;
                        }
                        case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:{
                            //LOG("GPS position received");
                            mavlink_global_position_int_t curGlobPos;
                            mavlink_msg_global_position_int_decode(&msg, &curGlobPos);
                            px4->UpdateCurrentGlobalPosition(curGlobPos);
                            break;
                        }
                        case MAVLINK_MSG_ID_RADIO_STATUS:{
                            //LOG("Radio status received");
                            mavlink_radio_status_t radioStatus;
                            mavlink_msg_radio_status_decode(&msg, &radioStatus);
                            px4->UpdateRadioStatus(radioStatus);
                            break;
                        }
                        default:{
                            //char bb[100];
                            //sprintf(bb, "Message Id: %d", msg.msgid);
                            //LOG(bb);
                            break;
                        }
                     }
                     //px4->PrintStatus();
                 }
            }
        }
    }
}

// TODO (tom) return thread id (wt)?
bool PX4Communicator::StartWrite(){

    if(this->writing){
        LOG("PX4Communicator::StartWrite is already writing");
        return false;
    }

    this->writing = true;

    pthread_t writeThread;
    int wt = pthread_create(&writeThread, NULL, StartWriteSetPointThread, this);


    return true;
}


bool PX4Communicator::StopWrite(){

    if(!this->writing){
        LOG("PX4Communicator::StopWrite is already not writing");
        return false;
    }

    this->writing = false;
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

void PX4Communicator::UpdateCurrentLocalPosition(mavlink_local_position_ned_t curLocPos){
    this->currentLocalPosition = curLocPos;
}

void PX4Communicator::UpdateCurrentGlobalPosition(mavlink_global_position_int_t curGlobPos){
    this->currentGlobalPosition = curGlobPos;
}

void PX4Communicator::UpdateBatteryStatus(mavlink_battery_status_t batteryStatus){
    this->batteryStatus = batteryStatus;
}

void PX4Communicator::UpdateRadioStatus(mavlink_radio_status_t radioStatus){
    this->radioStatus = radioStatus;
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
    }else{
        //LOG("Command: Write setpoint");
    }

    return;
}

// Send command to server
int PX4Communicator::WriteMessage(mavlink_message_t msg){


    BYTE buf[300];
    int len = mavlink_msg_to_send_buffer(buf, &msg);

    this->server->Write(buf,len);

    // TODO it's a fake len
    return len;
}


void PX4Communicator::WriteSetPointThread(void){

    while(this->writing){
        usleep(175000);   // Read at 2Hz
        this->WriteSetpoint();
        HeartBeat(server);
    }
}


void* StartWriteSetPointThread(void *args){

    PX4Communicator *px4 = (PX4Communicator *)args;
    px4->WriteSetPointThread();
    pthread_exit(NULL);

}

void PX4Communicator::PrintStatus(){

    char buf[100];
    sprintf(buf, "Local position: %f,%f,%f", this->currentLocalPosition.x,this->currentLocalPosition.y,this->currentLocalPosition.z);
    LOG(buf);
    sprintf(buf, "Global position: %d,%d,%d", this->currentGlobalPosition.lat,this->currentGlobalPosition.lon,this->currentGlobalPosition.alt);

    LOG(buf);
    sprintf(buf, "Battery: %d", this->batteryStatus.current_battery);
    LOG(buf);
    sprintf(buf, "Radio: %d", this->radioStatus.fixed);
    LOG(buf);
    printf("\n");

}


