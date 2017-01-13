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
    server-> ReadFrom(simulatorPort);

    this->stopWriteReadThreads = false;

    this->systemId = 255;
    this->autopilotId = 1;
    this->companionId = 1;

    pthread_t readThread;
    int result = pthread_create(&readThread, NULL, StartReadThread, this);
    if(result != 0)
    {
        ERROR("Failed to create the dispatch thread");
    }
    while(server->writeSock == INVALID_SOCKET);
}


void PX4Communicator::HeartBeat(UdpCommunicationSocket* server){

    mavlink_message_t msg;
    BYTE buf[255];
    mavlink_msg_heartbeat_pack(255, 1, &msg, MAV_TYPE_GCS,MAV_AUTOPILOT_GENERIC_WAYPOINTS_AND_SIMPLE_NAVIGATION_ONLY, MAV_MODE_AUTO_ARMED, 0, MAV_STATE_ACTIVE);
    int len = mavlink_msg_to_send_buffer(buf, &msg);
    server->Write(buf,len);
}

void PX4Communicator::Read(UdpCommunicationSocket *server) {

    int BUFFER_LENGTH = 255;
    BYTE buf[BUFFER_LENGTH];
    char temp;
    memset(buf, 0, BUFFER_LENGTH);
    int recsize = server->Read(buf,BUFFER_LENGTH);

    if (recsize > 0) {

        mavlink_message_t msg;
        mavlink_status_t status;

        for (int j = 0; j < recsize; ++j){

            temp = buf[j];

             if (mavlink_parse_char(MAVLINK_COMM_0, buf[j], &msg, &status)){
                 switch (msg.msgid) {
                    case MAVLINK_MSG_ID_HEARTBEAT:{
                        LOG("Heart beat received");
                        HeartBeat(server);
                        break;
                    }
                    case MAVLINK_MSG_ID_LOCAL_POSITION_NED:{
                        LOG("Local position received");
                    }
                    case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:{
                        LOG("GPS position received");
                        break;
                    }
                    case MAVLINK_MSG_ID_BATTERY_STATUS:{
                        LOG("Battery status received");
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

void *PX4Communicator::DispatchMavLinkMessages(void *ptr) {
    UdpCommunicationSocket *server = (UdpCommunicationSocket*)ptr;
    while(true)
    {
        int BUFFER_LENGTH = 255;
        BYTE buf[BUFFER_LENGTH];
        char temp;
        memset(buf, 0, BUFFER_LENGTH);
        int recsize = server->Read(buf,BUFFER_LENGTH);
        if (recsize > 0) {
            // Something received - print out all bytes and parse packet
            mavlink_message_t msg;
            mavlink_status_t status;

            for (int j = 0; j < recsize; ++j)
              {
                temp = buf[j];
                if (mavlink_parse_char(MAVLINK_COMM_0, buf[j], &msg, &status))
                  {
                    // Packet received
                    switch ((BYTE)msg.msgid) {
                    case MAVLINK_MSG_ID_HEARTBEAT:
                        ERROR("heart is pumping !!");
                        HeartBeat(server);
                        break;
                    case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                        ERROR("GPS Position Received");
                        break;
                    default:
                        //DEBUG(".");
                        break;
                    }
                  }
              }
        }
    }
}

// Arm
void PX4Communicator::Arm(){

    mavlink_command_long_t cmd = {0};
    cmd.confirmation = 1;
    cmd.target_system = this->companionId;
    cmd.target_component = this->autopilotId;

    cmd.command = MAV_CMD_COMPONENT_ARM_DISARM;
    cmd.param1 = 1;

    mavlink_message_t msg;
    mavlink_msg_command_long_encode(this->systemId, this->autopilotId, &msg, &cmd);

    this->WriteMessage(msg);

    // Print log
    LOG("Command: Arm");
}

//Takeoff
void PX4Communicator::Takeoff(float alt){

    mavlink_command_long_t cmd = {0};
    cmd.confirmation = 1;
    cmd.target_system = this->companionId;
    cmd.target_component = this->autopilotId;

    cmd.command = MAV_CMD_NAV_TAKEOFF;
    cmd.param4 = NAN;
    cmd.param5 = NAN;
    cmd.param6 = NAN;
    cmd.param7 = alt;

    mavlink_message_t msg;
    mavlink_msg_command_long_encode(this->systemId, this->autopilotId, &msg, &cmd);

    this->WriteMessage(msg);

    // Print log
    char buff[100];
    sprintf(buff,"Command: Take off (Altitude %f)", alt);
    LOG(buff);
}

//Return to launch
void PX4Communicator::ReturnToLaunch(){

    mavlink_command_long_t cmd = {0};
    cmd.confirmation = 1;
    cmd.target_system = this->companionId;
    cmd.target_component = this->autopilotId;

    cmd.command = MAV_CMD_NAV_RETURN_TO_LAUNCH;

    mavlink_message_t msg;
    mavlink_msg_command_long_encode(this->systemId, this->autopilotId, &msg, &cmd);

    this->WriteMessage(msg);

    // Print log
    LOG("Command: Return to launch");
}


// Start/Stop offboard control
void PX4Communicator::OffBoard(bool on)
{
    mavlink_command_long_t cmd = {0};
    cmd.confirmation = 1;
    cmd.target_system = this->companionId;
    cmd.target_component = this->autopilotId;

    cmd.param1 = (float) on;
    cmd.command = MAV_CMD_NAV_GUIDED_ENABLE;

    mavlink_message_t msg;
    mavlink_msg_command_long_encode(this->systemId, this->autopilotId, &msg, &cmd);

    this->WriteMessage(msg);

    // Print log
    char buff[100];
    strcpy(buff,"Command: ");
    if(on){
        strcat(buff,"Start ");
    }else{
        strcat(buff,"Stop ");
    }
    strcat(buff,"offboard control");
    LOG(buff);
}

// Start offboard controller
void PX4Communicator::StartOffBoard(){

    // Must write a setpoint before starting offborad controller
    this->WriteSetpoint();
    this->OffBoard(true);
}

//Set target position
void PX4Communicator::SetPosition(float x, float y, float z){

    mavlink_set_position_target_local_ned_t sp;

    sp.time_boot_ms = 0;
    sp.type_mask = MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_POSITION & MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_ANGLE;
    sp.coordinate_frame = MAV_FRAME_LOCAL_NED;
    sp.x = x;
    sp.y = y;
    sp.z = z;
    sp.yaw = 0;

    this->targetSetpoint = sp;

    // Print log
    char buff[100];
    sprintf(buff,"Command: Set position (x %f, y %f, z %f)", sp.x, sp.y, sp.z);
    LOG(buff);
}

//Set target velocities
void PX4Communicator::SetVelocity(float vx, float vy, float vz){

    mavlink_set_position_target_local_ned_t sp;

    sp.type_mask = MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_VELOCITY;
    sp.coordinate_frame = MAV_FRAME_LOCAL_NED;
    sp.vx = vx;
    sp.vy = vy;
    sp.vz = vz;

    this->targetSetpoint = sp;

    // Print log
    char buff[100];
    sprintf(buff,"Command: Set velocity (vx %f, vy %f, vz %f)", sp.vx, sp.vy, sp.vz);
    LOG(buff);
}

// Set yaw
void PX4Communicator::SetYaw(float yaw){

    mavlink_set_position_target_local_ned_t sp;

    sp.type_mask &= MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_ANGLE;
    sp.yaw  = yaw;

    this->targetSetpoint = sp;

    // Print log
    char buff[100];
    sprintf(buff,"Command: Set yaw (yaw %f)", sp.yaw);
    LOG(buff);
}

// Set yaw rate
void PX4Communicator::SetYawRate(float yawRate){

    mavlink_set_position_target_local_ned_t sp;

    sp.type_mask &= MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_RATE;
    sp.yaw_rate  = yawRate;

    this->targetSetpoint = sp;

    // Print log
    char buff[100];
    sprintf(buff,"Command: Set yaw rate (yaw rate %f)", sp.yaw_rate);
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
    }else{
        LOG("Command: Write setpoint");
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

void PX4Communicator::StartAutopilot(){

    // Get current target setpoint
    this->StartOffBoard();

    pthread_t writeThread;
    int wt = pthread_create(&writeThread, NULL, StartWriteSetPointThread, this);

    LOG("Command: Start autopilot");

}

void PX4Communicator::StopAutopilot(){

    this->stopWriteReadThreads = true;
    this->StopOffBoard();

    LOG("Command: Stop autopilot");
}

void PX4Communicator::WriteSetPointThread(void){

    while(!this->stopWriteReadThreads){
        usleep(175000);   // Read at 2Hz
        this->WriteSetpoint();
    }
}

void PX4Communicator::ReadThread(UdpCommunicationSocket *server){

    // TODO (tom) fix this exit condition
    while(!this->stopWriteReadThreads){
        usleep(175000);   // Stream at 2Hz
        this->Read(server);
    }
}


void* StartWriteSetPointThread(void *args){

    PX4Communicator *px4 = (PX4Communicator *)args;
    px4->WriteSetPointThread();
    pthread_exit(NULL);

}

void* StartReadThread(void *args){

    PX4Communicator *px4 = (PX4Communicator *)args;
    px4->ReadThread(px4->server);
    pthread_exit(NULL);

}
