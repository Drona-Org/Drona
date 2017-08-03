#ifndef UDPSOCKETPORT_H
#define UDPSOCKETPORT_H

#define WIN32_LEAN_AND_MEAN
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "Port.h"
#include "Logger.h"

using namespace std;

class UdpCommunicationSocket : public Port {
public:
    char buffer[255]; // datagram max size
    int size = 0;
    int pos = 0;
    SOCKET readSock = INVALID_SOCKET;

    //write to port
    HRESULT Write(const BYTE* ptr, int count);

    //read from port
    HRESULT Read(BYTE* buffer, int bytesToRead);

    //Connect to Sender
    HRESULT ReadFrom(int portAddr);

    //Connect to receiver
    HRESULT WriteTo(const char* ipAddr, int portAddr);

	// close the port.
	void Close();

};


#endif // !SOCKETPORT_H
