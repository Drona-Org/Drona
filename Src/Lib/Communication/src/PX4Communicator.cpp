#include "PX4Communicator.h"

// Constructor
PX4Communicator::PX4Communicator(int simulatorPort){

    this->server = new UdpCommunicationSocket();
    server->ReadFrom(simulatorPort);

}

// Arm
int PX4Communicator::Arm(){

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();

    cmd.command = MAV_CMD_COMPONENT_ARM_DISARM;
    cmd.param1 = 1;

    this->SendCommand(cmd);

}

//Takeoff local
int PX4Communicator::TakeoffLocal(float altitude){

    mavlink_command_long_t cmd = this->InitMavLinkCommandLongT();

    cmd.command = MAV_CMD_NAV_TAKEOFF;
    cmd.param4 = NAN;
    cmd.param5 = NAN;
    cmd.param6 = NAN;
    cmd.param7 = -altitude;

    this->SendCommand(cmd);
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
