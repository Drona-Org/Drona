#ifndef SOCKETPORT_H
#define SOCKETPORT_H

#include "Port.h"

#define SOCKET int
#define INVALID_SOCKET -1

class UdpSocketPort : public Port
{
	SOCKET sock = INVALID_SOCKET;
	sockaddr_in serveraddr;
	sockaddr_in other;
    socklen_t addrlen = sizeof(sockaddr_in);
	char buffer[255]; // datagram max size
	int size = 0;
	int pos = 0;
    int serverport = 12345;
	SOCKET sendSocket = INVALID_SOCKET;

public:
    // Bind the udp socket to the given local port, and set it up so we only listen
    // to UDP packets from the given serverIp address (and optional port).
	HRESULT Connect(const char* serverIp, int localPort, int serverport = -1);

	// write to the socket
	HRESULT Write(const BYTE* ptr, int count);

	// read a given number of bytes from the port.
	HRESULT Read(BYTE* buffer, int bytesToRead, int* bytesRead);

    // Create a udp socket
    SOCKET Create(int portAddress);

	// close the port.
	void Close();

	// Get the local IPV4 address of this machine
	static HRESULT GetLocalAddress(char* buffer, int bufferSize);
};


#endif // !SOCKETPORT_H
