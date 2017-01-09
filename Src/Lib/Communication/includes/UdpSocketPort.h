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
#include "Logger.h"

using namespace std;

#define HRESULT long
#define BYTE unsigned char
#define SUCCESS 0
#define FAILURE -1
#define SOCKET int
#define INVALID_SOCKET -1

class UdpCommunicationSocket
{
    struct sockaddr_in writeAddr;
    struct sockaddr_in readAddr;
    char buffer[255]; // datagram max size
    int size = 0;
    int pos = 0;
    SOCKET readSock = INVALID_SOCKET;


public:
    SOCKET writeSock = INVALID_SOCKET;
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
