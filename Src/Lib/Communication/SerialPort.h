#pragma once
#include <string>
#include "rpc.h"
#include "rpcndr.h"
#include "Port.h"

enum Parity {
    Parity_None = ((WORD)0x0100),
    Parity_Odd = ((WORD)0x0200),
    Parity_Even = ((WORD)0x0400),
    Parity_Mark = ((WORD)0x0800),
    Parity_Space = ((WORD)0x1000)
};

enum StopBits
{
    StopBits_None = 0,
    StopBits_10 = ((WORD)0x0001),
    StopBits_15 = ((WORD)0x0002),
    StopBits_20 = ((WORD)0x0004)
};


enum Handshake
{
    Handshake_None,
    Handshake_XonXoff,
    Handshake_RequestToSend,
    Handshake_RequestToSendXonXoff
};

class SerialPort : public Port
{
public:
    SerialPort();
    ~SerialPort();

    // Find a serial port whose name contains the given substring (e.g: 'px4');
    HRESULT Find(const char* substring, _Out_ std::string& portName);

    // open the serial port
    HRESULT Open(const char* portName, int baudRate, int dataBits, Parity parity, StopBits sb, bool dtrEnable, bool rtsEnable, Handshake hs, int readTimeout, int writeTimeout, int readBufferSize, int writeBufferSize);

    // write to the serial port
    HRESULT Write(const byte* ptr, int count);

    // read a given number of bytes from the port.
    HRESULT Read(byte* buffer, int bytesToRead, int* bytesRead);

    // close the port.
    void Close();
private:
    HRESULT SetAttributes(int baud_rate, Parity parity, int data_bits, StopBits bits, Handshake hs);

    HANDLE handle;
    OVERLAPPED writeOverlapped;
    OVERLAPPED readOverlapped;
};

