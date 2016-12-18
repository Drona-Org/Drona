#define WIN32_LEAN_AND_MEAN
#include "UdpSocketPort.h"

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"
#include <mavlink.h>

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

    mavlink_message_t msg;
    uint16_t len;
    int bytes_sent;
    uint8_t buf[2041];

    /*Send Heartbeat */
    mavlink_msg_heartbeat_pack(1, 200, &msg, MAV_TYPE_HELICOPTER, MAV_AUTOPILOT_GENERIC, MAV_MODE_GUIDED_ARMED, 0, MAV_STATE_ACTIVE);
    len = mavlink_msg_to_send_buffer(buf, &msg);
    bytes_sent = sendto(writeSock, buf, len, 0, (struct sockaddr*)&writeAddr, sizeof(struct sockaddr_in));


    //if (sendto(writeSock, ptr, count, 0, (struct sockaddr*)&writeAddr, sizeof(writeAddr))==-1)
    //{
    //    perror("sendto()");
    //}
}

// read a given number of bytes from the port.
HRESULT UdpCommunicationSocket::Read(BYTE* buffer, int bytesToRead, int* bytesRead)
{
    socklen_t alen = (sizeof(readAddr));
    *bytesRead = bytesToRead;
    return recvfrom(readSock, buffer, bytesToRead, 0, (struct sockaddr*)&readAddr, &alen);
    /*
    if (recvfrom(readSock, buffer, bytesToRead, 0, (struct sockaddr*)&readAddr, &alen)==-1)
    {
        return FAILURE;
    }
    else
    {
        return SUCCESS;
    }

    /*
    //printf("Received packet from %s:%d\nData: %s\n\n", inet_ntoa(readAddr.sin_addr), ntohs(readAddr.sin_port), buffer);

	// Receive until the peer closes the connection
    int rc;
	if (pos == size)
	{
		while (true)
		{
			pos = 0;
			size = 0;
			*bytesRead = 0;
            rc = recvfrom(readSock, (char*)&this->buffer, 255, 0, (struct sockaddr*)&readAddr, &alen);

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
    return rc;
    */
}

// close the port.
void UdpCommunicationSocket::Close()
{
    close(readSock);
    close(writeSock);
}

