#include <iostream>
#include "UdpSocketPort.h"
#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

using namespace std;

#define SIMULATOR_PORT 14550

static mavlink_system_t mavlink_system;


int main()
{
    UdpCommunicationSocket *server = new UdpCommunicationSocket();
    server->ReadFrom(SIMULATOR_PORT);

    mavlink_system.sysid = 255;
    mavlink_system.compid = 1;

    int readSuccess = 0;
    //while(readSuccess == 0)
    for(int i=0; i<100; i++)
    {
        int readBytes = 0;
        uint8_t dataread = 0;
        mavlink_message_t msg;
        mavlink_status_t status;

        //readSuccess = server->Read(&dataread,1,&readBytes);
        /*if(readSuccess == 0 && readBytes == 1)
        {

            int x = mavlink_frame_char(MAVLINK_COMM_0, dataread, &msg, &status);
            cout << dataread << endl;

            if(x)
            {
                switch ((BYTE)msg.msgid) {
                case MAVLINK_MSG_ID_HEARTBEAT:
                    cout << "heart is pumping !!" << endl;
                    break;
                case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
                    cout << "GPS" << endl;
                    break;
                default:
                    cout << msg.msgid << endl;
                    break;
                }
            }
        }*/
        int BUFFER_LENGTH = 255;
        BYTE buf[1000];
        char temp;
        memset(buf, 0, BUFFER_LENGTH);
        int recsize = server->Read(buf,BUFFER_LENGTH,&readBytes);
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

    char IPaddr[64] = "127.0.0.1";
    server->WriteTo(IPaddr,SIMULATOR_PORT);
    BYTE buff[64] = "";
    server->Write(buff,20);

}

