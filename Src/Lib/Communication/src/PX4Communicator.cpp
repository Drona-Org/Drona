#include "PX4Communicator.h"

// Constructor
PX4Communicator::PX4Communicator(int simulatorPort){

    this->server = new UdpCommunicationSocket();
    server-> ReadFrom(simulatorPort);

    //start the Dispatch function.
    pthread_t dispatchThread;
    int result = pthread_create(&dispatchThread, NULL, PX4Communicator::DispatchMavLinkMessages, server);
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

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();
    cmd.command = MAV_CMD_COMPONENT_ARM_DISARM;
    cmd.param1 = 1;
    this->SendCommand(cmd);

    // Print log
    LOG("Command: Arm");
}

//Takeoff
void PX4Communicator::Takeoff(float alt){

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();
    cmd.command = MAV_CMD_NAV_TAKEOFF;
    cmd.param4 = NAN;
    cmd.param5 = NAN;
    cmd.param6 = NAN;
    cmd.param7 = alt;

    this->SendCommand(cmd);

    // Print log
    char buff[100];
    sprintf(buff,"Command: Take off (Altitude %f)", alt);
    LOG(buff);
}

//Land
void PX4Communicator::Land(float lat, float lon){

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();

    cmd.command = MAV_CMD_NAV_LAND;
    cmd.param1 = 500;
    cmd.param5 = lat;
    cmd.param6 = lon;

    this->SendCommand(cmd);
}

//Return to launch
void PX4Communicator::ReturnToLaunch(){

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();

    cmd.command = MAV_CMD_NAV_RETURN_TO_LAUNCH;

    this->SendCommand(cmd);

    // Print log
    LOG("Command: Return to launch");
}

// Start/Stop offboard control
void PX4Communicator::OffBoard(bool on)
{
    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();
    cmd.param1 = (float) on;
    cmd.command = MAV_CMD_NAV_GUIDED_ENABLE;
    this->SendCommand(cmd);

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

//Goto (Navigate to Waypoint)
void PX4Communicator::SetPosition(float lat, float lon, float alt, float yaw){

    mavlink_set_position_target_local_ned_t cmd;
    cmd.time_boot_ms = 0;
    cmd.type_mask = MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_POSITION & MAVLINK_MSG_SET_POSITION_TARGET_LOCAL_NED_YAW_ANGLE;
    cmd.target_system = 1;
    cmd.target_component = 1;
    cmd.coordinate_frame = MAV_FRAME_LOCAL_NED;
    cmd.x = lat;
    cmd.y = lon;
    cmd.z = alt;
    cmd.yaw = yaw;

    mavlink_message_t msg;
    mavlink_msg_set_position_target_local_ned_encode(255, 1, &msg, &cmd);

    BYTE buf[1000];

    int len = mavlink_msg_to_send_buffer(buf, &msg);

    this->server->Write(buf,len);

    // Print log
    char buff[100];
    sprintf(buff,"Command: Go to (lat %f, lon %f, alt %f, yaw %f)", lat, lon, alt, yaw);
    LOG(buff);
}


// Set attitute
void PX4Communicator::SetAttitude(float quat[], float rates[]){

    mavlink_set_attitude_target_t cmd;
    cmd.time_boot_ms = 0;
    cmd.target_system = 1;
    cmd.target_component = 1;

    // Set quaternions
    cmd.q[0] = quat[0];
    cmd.q[1] = quat[1];
    cmd.q[2] = quat[2];
    cmd.q[3] = quat[3];

    // Set body rates
    cmd.body_roll_rate = rates[0];
    cmd.body_pitch_rate = rates[1];
    cmd.body_yaw_rate = rates[2];
    cmd.thrust = rates[3];

    mavlink_message_t msg;
    mavlink_msg_set_attitude_target_encode(255,1,&msg,&cmd);

    BYTE buf[1000];
    int len = mavlink_msg_to_send_buffer(buf, &msg);

    this->server->Write(buf,len);

    // Print log
    char buff[100];
    sprintf(buff,"Command: Set attitude (quat: %f,%f,%f,%f; rates: %f,%f,%f,%f)", quat[0],quat[1],quat[2],quat[3],rates[0],rates[1],rates[2],rates[3]);
    LOG(buff);

}



// Initialize a mavlink_command_long_t
// confirmation, target_system, target_component = 1, the rest = 0
mavlink_command_long_t PX4Communicator::InitMavLinkCommandLongT(){

    mavlink_command_long_t cmd;
    cmd.command = 0;
    cmd.confirmation = 1;
    cmd.target_system = 1;
    cmd.target_component = 1;
    cmd.param1 = 0;
    cmd.param2 = 0;
    cmd.param3 = 0;
    cmd.param4 = 0;
    cmd.param5 = 0;
    cmd.param6 = 0;
    cmd.param7 = 0;

    return cmd;
}

// Send command to server
void PX4Communicator::SendCommand(mavlink_command_long_t cmd){

    mavlink_message_t msg;
    BYTE buf[1000];

    mavlink_msg_command_long_encode(255, 1, &msg, &cmd);
    int len = mavlink_msg_to_send_buffer(buf, &msg);

    this->server->Write(buf,len);
}
