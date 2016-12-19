
void mavlink_start_send(int channel, int length);
void mavlink_end_send(int channel, int length);
#define MAVLINK_START_UART_SEND(chan, length) mavlink_start_send(chan, length)
#define MAVLINK_END_UART_SEND(chan, length) mavlink_end_send(chan, length);
#include <iostream>
#include "UdpSocketPort.h"
#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

using namespace std;

#define SIMULATOR_PORT 14550

static const uint8_t mavlink_message_crcs[256] = MAVLINK_MESSAGE_CRCS;
static const uint8_t mavlink_message_lengths[256] = MAVLINK_MESSAGE_LENGTHS;

UdpCommunicationSocket *server = new UdpCommunicationSocket();

/*
Set up the mavlink communication using buffering
*/
char datagram[255];
int datagrampos = 0;

void mavlink_start_send(int channel, int length)
{
    datagrampos = 0;
}

void mavlink_end_send(int channel, int length)
{
    server->Write((BYTE*)datagram, length);
}

static inline void _mavlink_send_uart(mavlink_channel_t chan, const char *buf, uint16_t len)
{
    if (len + datagrampos > 255)
    {
        printf("### Message is too big\n");
        exit(1);
    }
    ::memcpy(datagram + datagrampos, buf, len);
    datagrampos += len;
}

int main()
{

    mavlink_system_t mavlink_system;
    mavlink_system.sysid = 100; // System ID, 1-255
    mavlink_system.compid = 50; // Component/Subsystem ID, 1-25

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

