#ifndef PORT_H
#define PORT_H

#define HRESULT long
#define BYTE unsigned char
#define SUCCESS 0
#define FAILURE -1
#define SOCKET int
#define INVALID_SOCKET -1




class Port
{

public:

    struct sockaddr_in writeAddr;
    struct sockaddr_in readAddr;
    SOCKET writeSock = INVALID_SOCKET;

	// write to the serial port
    virtual HRESULT Write(const BYTE* ptr, int count) = 0;

	// read a given number of bytes from the port.
    virtual HRESULT Read(BYTE* buffer, int bytesToRead) = 0;

    // connect to sender
    virtual HRESULT ReadFrom(int portAddr) = 0;

	// close the port.
    //virtual void Close() = 0;
};
#endif // !PORT_H
