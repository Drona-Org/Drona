#include <iostream>
#include "UdpSocketPort.h"
using namespace std;

int main()
{
    const unsigned char buff[10] = "I Got It";
    UdpSocketPort *server = new UdpSocketPort();
    SOCKET sServer = server->Create(12345);

    //while(1) {
        server->Write(buff, 10);
    //}
}
