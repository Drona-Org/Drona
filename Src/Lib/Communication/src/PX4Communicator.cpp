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
    mavlink_msg_heartbeat_pack(255, 1, &msg, MAV_TYPE_GCS, MAV_AUTOPILOT_INVALID, MAV_MODE_MANUAL_ARMED, 0, MAV_STATE_ACTIVE);
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
                        DEBUG_LOG("heart is pumping !!");
                        HeartBeat(server);
                        break;
                    case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                        DEBUG_LOG("GPS Position Received");
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
int PX4Communicator::Arm(){

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();
    cmd.command = MAV_CMD_COMPONENT_ARM_DISARM;
    cmd.param1 = 1;
    this->SendCommand(cmd);
    LOG("Command: Arm !");
}

//Takeoff local
int PX4Communicator::TakeoffLocal(float altitude){

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();
    cmd.command = MAV_CMD_NAV_TAKEOFF;
    cmd.param4 = NAN;
    cmd.param5 = NAN;
    cmd.param6 = NAN;
    cmd.param7 = altitude;
    this->SendCommand(cmd);
    char buff[100];
    sprintf(buff,"Command: Take off (Altitude %f)", altitude);
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
