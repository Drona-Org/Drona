#define WIN32_LEAN_AND_MEAN
#include "UdpSocketPort.h"

HRESULT UdpCommunicationSocket::WriteTo(const char* ipAddr, int PortAddr)
{

    // Create a socket
    if ((writeSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
        perror("socket");

    bzero(&writeAddr, sizeof(writeAddr));
    writeAddr.sin_family = AF_INET;
    writeAddr.sin_port = htons(PortAddr);

    // Convert Internet address into binary and store it in serv_addr.sin_addr
    if (inet_aton(ipAddr, &writeAddr.sin_addr)==0)
    {
        fprintf(stderr, "inet_aton() failed\n");
        exit(1);
    }
}

HRESULT UdpCommunicationSocket::ReadFrom(int portAddress)
{
    // socket() creates a socket
    // args: protocol family, type of socket (datagram), protocol
    if ((readSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
      perror("socket");
    else
      printf("Server : Socket() successful\n");

    bzero(&readAddr, sizeof(readAddr));
    readAddr.sin_family = AF_INET;
    readAddr.sin_port = htons(portAddress);
    readAddr.sin_addr.s_addr = htonl(INADDR_ANY);

    // bind() assigns address to socket
    // args: socket descriptor, pointer to protocol address, size of address structure
    if (bind(readSock, (struct sockaddr* ) &readAddr, sizeof(readAddr))==-1)
      perror("bind");
    else
      printf("Server : bind() successful\n");
}

// write to the serial port
HRESULT UdpCommunicationSocket::Write(const BYTE* ptr, int count)
{
    if (sendto(writeSock, ptr, count, 0, (struct sockaddr*)&writeAddr, sizeof(writeAddr))==-1)
    {
        perror("sendto()");
    }
}

// read a given number of bytes from the port.
HRESULT UdpCommunicationSocket::Read(BYTE* buffer, int bytesToRead, int* bytesRead)
{
    socklen_t alen = (sizeof(readAddr));
    if (recvfrom(readSock, buffer, bytesToRead, 0, (struct sockaddr*)&readAddr, &alen)==-1)
            perror("recvfrom()");
    printf("Received packet from %s:%d\nData: %s\n\n",
                   inet_ntoa(readAddr.sin_addr), ntohs(readAddr.sin_port), buffer);
    /*
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
    return 0;*/
}

// close the port.
void UdpCommunicationSocket::Close()
{
    close(readSock);
    close(writeSock);
}

