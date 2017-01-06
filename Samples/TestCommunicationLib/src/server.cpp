#include <iostream>
#include "UdpSocketPort.h"
#include "PX4Communicator.h"
#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

using namespace std;

#define SIMULATOR_PORT 14550


int main()
{

    mavlink_system_t mavlink_system;
    mavlink_system.sysid = 100; // System ID, 1-255
    mavlink_system.compid = 50; // Component/Subsystem ID, 1-25

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
            for (int j = 0; j < recsize; ++j)
              {
                temp = buf[j];
                //printf("%02x ", (unsigned char)temp);
                if (mavlink_parse_char(MAVLINK_COMM_0, buf[j], &msg, &status))
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
    mavlink_message_t msg;
    BYTE buf[255];
    int len;
    mavlink_msg_heartbeat_pack(255, 1, &msg, MAV_TYPE_HELICOPTER, MAV_AUTOPILOT_GENERIC, MAV_MODE_GUIDED_ARMED, 0, MAV_STATE_ACTIVE);
    len = mavlink_msg_to_send_buffer(buf, &msg);



    server->Write(buf, len);


    PX4Communicator *PX4 = new PX4Communicator(SIMULATOR_PORT);

    PX4->Arm();
    PX4->TakeoffLocal(5);
}

