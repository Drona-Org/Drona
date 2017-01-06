#include <iostream>
#include "UdpSocketPort.h"
#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

using namespace std;

#define SIMULATOR_PORT 14550


UdpCommunicationSocket *server = new UdpCommunicationSocket();



int main()
{

    mavlink_system_t mavlink_system;
    mavlink_system.sysid = 100; // System ID, 1-255
    mavlink_system.compid = 50; // Component/Subsystem ID, 1-25

    server->ReadFrom(SIMULATOR_PORT);

    mavlink_system.sysid = 255;
    mavlink_system.compid = 1;

    for(int i=0; i<100; i++)
    {
        int BUFFER_LENGTH = 255;
        BYTE buf[1000];
        char temp;
        memset(buf, 0, BUFFER_LENGTH);
        int recsize = server->Read(buf,BUFFER_LENGTH);
        if (recsize > 0) {
            // Something received - print out all bytes and parse packet
            mavlink_message_t msg;
            mavlink_status_t status;

            //printf("Bytes Received: %d\nDatagram: ", (int)recsize);
            for (int i = 0; i < recsize; ++i)
              {
                temp = buf[i];
                //printf("%02x ", (unsigned char)temp);
                if (mavlink_parse_char(MAVLINK_COMM_0, buf[i], &msg, &status))
                  {
                    // Packet received
                    switch ((BYTE)msg.msgid) {
                    case MAVLINK_MSG_ID_HEARTBEAT:
                        cout << "heart is pumping !!" << endl;
                        break;
                    case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                        cout << "GPS" << endl;
                        break;
                    default:
                        //cout << msg.msgid << endl;
                        break;
                    }
                  }
              }
        }
    }

    //let me try to write now
    /*Send Heartbeat */
    mavlink_message_t msg;
    BYTE buf[255];
    int len;
    mavlink_msg_heartbeat_pack(255, 1, &msg, MAV_TYPE_HELICOPTER, MAV_AUTOPILOT_GENERIC, MAV_MODE_GUIDED_ARMED, 0, MAV_STATE_ACTIVE);
    len = mavlink_msg_to_send_buffer(buf, &msg);
    server->Write(buf, len);

    /*Send Arm */
    mavlink_command_long_t cmd;
    cmd.command = MAV_CMD_COMPONENT_ARM_DISARM;
    cmd.confirmation = 1;
    cmd.param1 = 1;
    cmd.target_system = 1;
    cmd.target_component = 1;
    cmd.param2 = 0;
    cmd.param3 = 0;
    cmd.param4 = 0;
    cmd.param5 = 0;
    cmd.param6 = 0;
    cmd.param7 = 0;



    mavlink_msg_command_long_encode(255, 1, &msg, &cmd);
    len = mavlink_msg_to_send_buffer(buf, &msg);
    server->Write(buf, len);
}

