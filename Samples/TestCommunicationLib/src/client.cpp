#include <iostream>
#include "UdpSocketPort.h"
#include "mavlink.h"



using namespace std;


int main()
{
    char IPaddr[64] = "127.0.0.1";
    BYTE buff[64] = "hello";
    UdpCommunicationSocket *client = new UdpCommunicationSocket();

    client->WriteTo(IPaddr,12345);
    client->Write(buff,20);

}

