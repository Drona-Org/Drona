#define WIN32_LEAN_AND_MEAN


#include "UdpSocketPort.h"
#include <stdio.h>

// Bind the udp socket to the given local port, and set it up so we only listen
// to UDP packets from the given serverIp address.
HRESULT UdpSocketPort::Connect(const char* serverIp, int localPort, int serverPort)
{
    sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_IP);
	struct sockaddr_in local;
	local.sin_family = AF_INET;
	local.sin_addr.s_addr = INADDR_ANY;
	local.sin_port = htons(localPort);
	this->serverport = serverPort;

	struct addrinfo hints;
    bzero(&hints, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_DGRAM;
	hints.ai_protocol = IPPROTO_UDP;

	struct addrinfo *result = NULL;
	int rc = getaddrinfo(serverIp, "0", &hints, &result);
	if (rc != 0) {
		printf("getaddrinfo failed with error: %d\n", rc);
        return FAILURE;
	}

	for (struct addrinfo *ptr = result; ptr != NULL; ptr = ptr->ai_next) 
	{
		if (ptr->ai_family == AF_INET && ptr->ai_socktype == SOCK_DGRAM && ptr->ai_protocol == IPPROTO_UDP)
		{
			// found it!
			sockaddr_in* sptr = (sockaddr_in*)ptr->ai_addr;
			serveraddr.sin_family = sptr->sin_family;
			serveraddr.sin_addr.s_addr = sptr->sin_addr.s_addr;
			serveraddr.sin_port = 0; // don't know yet.
			break;
		}
	}

	freeaddrinfo(result);

	// bind socket to a local port.
	rc = bind(sock, (sockaddr*)&local, addrlen);
	if (rc < 0)
	{

        perror("connect bind failed with error");
        return FAILURE;
	}
    return SUCCESS;
}

SOCKET UdpSocketPort::Create(int portAddress)
{
    struct sockaddr_in my_addr;

    // socket() creates a socket
    // args: protocol family, type of socket (datagram), protocol
    if ((sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
      perror("socket");
    else
      printf("Server : Socket() successful\n");

    bzero(&my_addr, sizeof(my_addr));
    my_addr.sin_family = AF_INET;
    my_addr.sin_port = htons(portAddress);
    my_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    // bind() assigns address to socket
    // args: socket descriptor, pointer to protocol address, size of address structure
    if (bind(sock, (struct sockaddr* ) &my_addr, sizeof(my_addr))==-1)
      perror("bind");
    else
      printf("Server : bind() successful\n");

    return sock;
}

// write to the serial port
HRESULT UdpSocketPort::Write(const BYTE* ptr, int count)
{
    /*if (sendSocket == INVALID_SOCKET)
	{
		if (serverport == -1)
		{
			printf("cannot send until we've received something first so we can find out what the server port is.\n");
			return 0;
		}
    }*/

	serveraddr.sin_port = htons(serverport);
	int hr = sendto(sock, (const char*)ptr, count, 0, (sockaddr*)&serveraddr, addrlen);
    if (hr == INVALID_SOCKET)
	{
        printf("#### send failed with error: %d\n", hr);
	}

	return hr;
}

// read a given number of bytes from the port.
HRESULT UdpSocketPort::Read(BYTE* buffer, int bytesToRead, int* bytesRead)
{
	// Receive until the peer closes the connection
	if (pos == size)
	{
		while (true)
		{
			pos = 0;
			size = 0;
			*bytesRead = 0;
            int rc = recvfrom(sock, (char*)&this->buffer, 255, 0, (struct sockaddr*)&other, &addrlen);
			if (other.sin_addr.s_addr != serveraddr.sin_addr.s_addr)
			{
				// this is from a different PX4 then, one that we are not interested in.
				continue;
			}
			else if (serverport == -1)
			{
				// we now have it.
				serverport = ntohs(other.sin_port);
			}
			if (serverport != ntohs(other.sin_port))
			{
				// this is from a different mavlink node then, one that we are not interested in.
				continue;
			}
			if (rc == 0)
			{
				printf("Connection closed\n");
			}
			else if (rc < 0)
			{
                printf("#### recv failed with error: %d\n", rc);
                return rc;
			}
			else
			{
				size = rc;
				break;
			}
		}
	}

	int len = size - pos;
	if (len > bytesToRead)
	{
		len = bytesToRead;
	}
	::memcpy(buffer, this->buffer + pos, len);
	pos += len;

	*bytesRead = len;
	return 0;
}

// close the port.
void UdpSocketPort::Close()
{
    close(sock);
}

HRESULT UdpSocketPort::GetLocalAddress(char* buffer, int bufferSize)
{
	if (bufferSize == 0)
	{
        return FAILURE;
	}
	buffer[0] = 0;

	int rc = gethostname(buffer, bufferSize);
	if (rc != 0) {
        return rc;
	}

	struct hostent *phe = gethostbyname(buffer);
	if (phe == 0) {
        printf("Failed to obtain host\n");
        return FAILURE;
	}

	if (phe->h_addrtype == AF_INET) {

		for (int i = 0; phe->h_addr_list[i] != 0; ++i) {
			struct in_addr addr;
            addr.s_addr = *(u_long *)phe->h_addr_list[i];
			inet_ntop(AF_INET, &addr, buffer, bufferSize);
			break;
		}
	}

	return 0;

}
