#ifndef SOCKETPORT_H
#define SOCKETPORT_H

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif


#include "Port.h"

// Need to link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")

class UdpSocketPort : public Port
{
	SOCKET sock = INVALID_SOCKET;
	sockaddr_in serveraddr;
	sockaddr_in other;
	int addrlen = sizeof(sockaddr_in);
	char buffer[255]; // datagram max size
	int size = 0;
	int pos = 0;
	int serverport = -1;
	SOCKET sendSocket = INVALID_SOCKET;

public:

	static HRESULT Initialize();

    // Bind the udp socket to the given local port, and set it up so we only listen
    // to UDP packets from the given serverIp address (and optional port).
	HRESULT Connect(const char* serverIp, int localPort, int serverport = -1);

	// write to the socket
	HRESULT Write(const BYTE* ptr, int count);

	// read a given number of bytes from the port.
	HRESULT Read(BYTE* buffer, int bytesToRead, int* bytesRead);

	// close the port.
	void Close();

	// Get the local IPV4 address of this machine
	static HRESULT GetLocalAddress(char* buffer, int bufferSize);
};


#endif // !SOCKETPORT_H
