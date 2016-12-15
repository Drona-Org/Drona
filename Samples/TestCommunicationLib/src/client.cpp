#include <iostream>
#include "UdpSocketPort.h"
using namespace std;

int main()
{
    unsigned char buff[100] = "you rock";;
    UdpSocketPort *client = new UdpSocketPort();
    SOCKET csocket = client->Connect("127.0.0.1", 34532, 12345);


    while(1)
    {
        int read;
        client->Read(buff, 10, &read);
        cout<< buff << endl;
        cout<< "read bytes "<< read << endl;

    }
    cout <<"Connected";
}
