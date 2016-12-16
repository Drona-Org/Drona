#include <iostream>
#include "UdpSocketPort.h"
using namespace std;

int main()
{

    BYTE buff[64] = "";
    int *read;
    UdpCommunicationSocket *server = new UdpCommunicationSocket();
    server->ReadFrom(12345);
    server->Read(buff,64,read);

}

