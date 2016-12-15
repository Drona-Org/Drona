#ifndef PORT_H
#define PORT_H

#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define HRESULT long
#define BYTE unsigned char
#define SUCCESS 0
#define FAILURE -1


class Port
{
public:
	// write to the serial port
    virtual HRESULT Write(const BYTE* ptr, int count) = 0;

	// read a given number of bytes from the port.
	virtual HRESULT Read(BYTE* buffer, int bytesToRead, int* bytesRead) = 0;

	// close the port.
	virtual void Close() = 0;
};
#endif // !PORT_H
