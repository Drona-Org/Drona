#define WIN32_LEAN_AND_MEAN
#define MAVLINK_SEND_UART_BYTES
#define MAVLINK_USE_CONVENIENCE_FUNCTIONS

#include "UdpSocketPort.h"
#include "mavlink_types.h"
mavlink_system_t mavlink_system;

#include <mavlink.h>
#include "mavlink_helpers.h"


HRESULT UdpCommunicationSocket::WriteTo(const char* ipAddr, int PortAddr)
{

    // Create a socket
    if ((writeSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
    {
        ERROR("Write socket could not be initialized");
    }

    bzero(&writeAddr, sizeof(writeAddr));
    writeAddr.sin_family = AF_INET;
    writeAddr.sin_port = htons(PortAddr);

    // Convert Internet address into binary and store it in serv_addr.sin_addr
    if (inet_aton(ipAddr, &writeAddr.sin_addr)==0)
    {
        ERROR("inet_aton() failed\n");
        exit(1);
    }
}

HRESULT UdpCommunicationSocket::ReadFrom(int portAddress)
{
    // socket() creates a socket
    // args: protocol family, type of socket (datagram), protocol
    if ((readSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
      ERROR("Read socket could not be initialized");
    else
      LOG("Read socket connected");

    bzero(&readAddr, sizeof(readAddr));
    readAddr.sin_family = AF_INET;
    readAddr.sin_port = htons(portAddress);
    readAddr.sin_addr.s_addr = htonl(INADDR_ANY);

    // bind() assigns address to socket
    // args: socket descriptor, pointer to protocol address, size of address structure
    if (bind(readSock, (struct sockaddr* ) &readAddr, sizeof(readAddr))==-1)
      ERROR("Read socket could not be binded");
    else
      LOG("Read socket binded");
}

// write to the serial port
HRESULT UdpCommunicationSocket::Write(const BYTE* ptr, int count)
{
    if(writeSock != INVALID_SOCKET)
    {
        if (sendto(writeSock, ptr, count, 0, (struct sockaddr*)&writeAddr, sizeof(writeAddr))==-1)
        {
            ERROR("Write Failed");
        }
    }
    else
    {
        ERROR("writeSocket has not been initialized yet, waiting to receive a message");
    }

}

// read a given number of bytes from the port.
HRESULT UdpCommunicationSocket::Read(BYTE* buffer, int bytesToRead)
{
    socklen_t alen = (sizeof(readAddr));
    int readBytes = recvfrom(readSock, buffer, bytesToRead, 0, (struct sockaddr*)&writeAddr, &alen);
    //read a message, now initialize the socket
    if (writeSock == INVALID_SOCKET && ((writeSock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1))
        ERROR("socket initialization error");
    return readBytes;
}

// close the port.
void UdpCommunicationSocket::Close()
{
    close(readSock);
    close(writeSock);
}

