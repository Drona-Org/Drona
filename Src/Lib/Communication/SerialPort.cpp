#include "SerialPort.h"

#include <comdef.h>
#include <Wbemidl.h>
#include <string>

#pragma comment(lib, "wbemuuid.lib")


SerialPort::SerialPort()
{
}


SerialPort::~SerialPort()
{
}

HRESULT
SerialPort::Find(const char* substring, _Out_ std::string& portName)
{
    HRESULT hr = NULL;
    ::CoInitialize(NULL);

    std::string match(substring);
    _strlwr_s((char*)match.c_str(), match.length() + 1);

    hr = CoInitializeSecurity(
        NULL,                       // security descriptor
        -1,                          // use this simple setting
        NULL,                        // use this simple setting
        NULL,                        // reserved
        RPC_C_AUTHN_LEVEL_DEFAULT,   // authentication level  
        RPC_C_IMP_LEVEL_IMPERSONATE, // impersonation level
        NULL,                        // use this simple setting
        EOAC_NONE,                   // no special capabilities
        NULL);                          // reserved

    if (FAILED(hr))
    {
        CoUninitialize();
        printf("Failed to initialize security. Error code = 0x%x\n", hr);
        return hr;
    }

    // Step 3: ---------------------------------------------------
    // Obtain the initial locator to WMI -------------------------

    IWbemLocator *pLoc = NULL;

    hr = CoCreateInstance(
        CLSID_WbemLocator,
        0,
        CLSCTX_INPROC_SERVER,
        IID_IWbemLocator, (LPVOID *)&pLoc);

    if (FAILED(hr))
    {
        printf("Failed to create IWbemLocator object.  Err code = 0x%x\n", hr);
        CoUninitialize();
        return hr;
    }


    IWbemServices *pSvc = NULL;
    // Connect to the root\cimv2 namespace with
    // the current user and obtain pointer pSvc
    // to make IWbemServices calls.
    hr = pLoc->ConnectServer(
        _bstr_t(L"ROOT\\CIMV2"), // Object path of WMI namespace
        NULL,                    // User name. NULL = current user
        NULL,                    // User password. NULL = current
        0,                       // Locale. NULL indicates current
        NULL,                    // Security flags.
        0,                       // Authority (for example, Kerberos)
        0,                       // Context object 
        &pSvc                    // pointer to IWbemServices proxy
    );

    if (FAILED(hr))
    {
        printf("Could not connect. Error code = 0x%x\n", hr);
        pLoc->Release();
        CoUninitialize();
        return hr;
    }

    // Step 5: --------------------------------------------------
    // Set security levels on the proxy -------------------------

    hr = CoSetProxyBlanket(
        pSvc,                        // Indicates the proxy to set
        RPC_C_AUTHN_WINNT,           // RPC_C_AUTHN_xxx
        RPC_C_AUTHZ_NONE,            // RPC_C_AUTHZ_xxx
        NULL,                        // Server principal name 
        RPC_C_AUTHN_LEVEL_CALL,      // RPC_C_AUTHN_LEVEL_xxx 
        RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
        NULL,                        // client identity
        EOAC_NONE                    // proxy capabilities 
    );

    if (FAILED(hr))
    {
        printf("Could not set proxy blanket. Error code = 0x%x\n", hr);
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return hr;
    }

    // Step 6: --------------------------------------------------
    // Use the IWbemServices pointer to make requests of WMI ----

    // For example, get the name of the operating system
    IEnumWbemClassObject* pEnumerator = NULL;
    hr = pSvc->ExecQuery(
        bstr_t("WQL"),
        bstr_t("SELECT * FROM Win32_SerialPort"),
        WBEM_FLAG_FORWARD_ONLY,
        NULL,
        &pEnumerator);

    if (FAILED(hr))
    {
        printf("Query for operating system name failed.  Error code = 0x%x\n", hr);
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return hr;
    }

    // Step 7: -------------------------------------------------
    // Get the data from the query in step 6 -------------------

    IWbemClassObject *pclsObj = NULL;
    ULONG uReturn = 0;

    const char* toMatch = match.c_str();

    while (pEnumerator)
    {
        HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1,
            &pclsObj, &uReturn);

        if (0 == uReturn)
        {
            break;
        }

        VARIANT vtProp;

        // Get the value of the Name property
        hr = pclsObj->Get(L"Name", 0, &vtProp, 0, 0);
        BSTR name = vtProp.bstrVal;
        std::wstring big(vtProp.bstrVal);
        VariantClear(&vtProp);
        std::string temp(big.begin(), big.end()); // convert to ASCII

        _strlwr_s((char*)temp.c_str(), temp.length() + 1);

        const char* sub = strstr(temp.c_str(), toMatch);
        if (sub != NULL)
        {
            hr = pclsObj->Get(L"DeviceID", 0, &vtProp, 0, 0);
            std::wstring unicode(vtProp.bstrVal);
            VariantClear(&vtProp);
            portName.append(unicode.begin(), unicode.end());
            break;
        }

        pclsObj->Release();
    }

    // Cleanup
    // ========

    pSvc->Release();
    pLoc->Release();
    pEnumerator->Release();
    CoUninitialize();
    return S_OK;
}

HRESULT
SerialPort::Open(const char* portName, int baudRate, int dataBits, Parity parity, StopBits stopBits, bool dtrEnable, bool rtsEnable, Handshake hs, int readTimeout, int writeTimeout, int readBufferSize, int writeBufferSize)
{
    std::string port = portName;
    if (port.substr(0, 4) != "\\\\.\\")
    {
        port.insert(0, "\\\\.\\");
    }

    handle = CreateFileA(port.c_str(), GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

    if (handle == INVALID_HANDLE_VALUE)
    {
        return GetLastError();
    }

    HRESULT hr = SetAttributes(baudRate, parity, dataBits, stopBits, hs);

    if (!PurgeComm(handle, PURGE_RXCLEAR | PURGE_TXCLEAR) || !SetupComm(handle, readBufferSize, writeBufferSize))
    {
        return GetLastError();
    }

    COMMTIMEOUTS timeouts;			
    // FIXME: The windows api docs are not very clear about read timeouts,
    // and we have to simulate infinite with a big value (uint.MaxValue - 1)
    timeouts.ReadIntervalTimeout = MAXDWORD;
    timeouts.ReadTotalTimeoutMultiplier = MAXDWORD;
    timeouts.ReadTotalTimeoutConstant = (readTimeout == -1 ? MAXDWORD - 1 : (DWORD)readTimeout);

    timeouts.WriteTotalTimeoutMultiplier = 0;
    timeouts.WriteTotalTimeoutConstant = (writeTimeout == -1 ? MAXDWORD : (DWORD)writeTimeout);
    if (!SetCommTimeouts(handle, &timeouts))
    {
        return GetLastError();
    }

    // set signal
    DWORD dwFunc = (dtrEnable ? SETDTR : CLRDTR);
    if (!EscapeCommFunction(handle, dwFunc))
    {
        return GetLastError();
    }

    if (hs != Handshake_RequestToSend &&
        hs != Handshake_RequestToSendXonXoff)
    {
        dwFunc = (dtrEnable ? SETRTS : CLRRTS);
        if (!EscapeCommFunction(handle, dwFunc))
        {
            return GetLastError();
        }
    }

    writeOverlapped.Internal = 0;
    writeOverlapped.InternalHigh = 0;
    writeOverlapped.Offset = 0;
    writeOverlapped.OffsetHigh = 0;
    writeOverlapped.Pointer = 0;
    writeOverlapped.hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);

    if (writeOverlapped.hEvent == NULL)
    {
        return E_OUTOFMEMORY;
    }

    readOverlapped.Internal = 0;
    readOverlapped.InternalHigh = 0;
    readOverlapped.Offset = 0;
    readOverlapped.OffsetHigh = 0;
    readOverlapped.Pointer = 0;
    readOverlapped.hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);

    if (readOverlapped.hEvent == NULL)
    {
        return E_OUTOFMEMORY;
    }

    return S_OK;
}

HRESULT 
SerialPort::Write(const byte* ptr, int count)
{
    BOOL rc = WriteFile(handle, ptr, count, NULL, &writeOverlapped);
    if (rc)
    {
        return S_OK;
    }
    HRESULT hr = GetLastError();
    if (hr != ERROR_IO_PENDING)
    {
        return hr;
    }

    DWORD bytesWritten = 0;
    if (!GetOverlappedResult(handle, &writeOverlapped, &bytesWritten, TRUE))
    {
        return GetLastError();
    }

    if (bytesWritten != count)
    {
        return E_FAIL;
    }
    return S_OK;
}

HRESULT 
SerialPort::Read(byte* buffer, int bytesToRead, int* bytesRead)
{
    if (bytesRead == NULL)
    {
        return E_POINTER;
    }
    if (buffer == NULL)
    {
        return E_POINTER;
    }

    DWORD numberOfBytesRead = 0;
    if (ReadFile(handle, buffer, bytesToRead, &numberOfBytesRead, &readOverlapped))
    {
        *bytesRead = numberOfBytesRead;
        return 0;
    }

    HRESULT hr = GetLastError();
    if (hr != ERROR_IO_PENDING)
    {
        return hr;
    }

    if (!GetOverlappedResult(handle, &readOverlapped, &numberOfBytesRead, TRUE))
    {
        return GetLastError();
    }

    *bytesRead = numberOfBytesRead;
    return 0;
}

void 
SerialPort::Close()
{

    if (handle != 0)
    {
        CloseHandle(handle);
        handle = 0;
    }
    if (writeOverlapped.hEvent != 0)
    {
        CloseHandle(writeOverlapped.hEvent);
        writeOverlapped.hEvent = 0;
    }
    if (readOverlapped.hEvent != 0)
    {
        CloseHandle(writeOverlapped.hEvent);
        readOverlapped.hEvent = 0;
    }
}

HRESULT
SerialPort::SetAttributes(int baudRate, Parity parity, int dataBits, StopBits bits, Handshake hs)
{
    DCB dcb;
    if (!GetCommState(this->handle, &dcb))
    {
        return GetLastError();
    }

    dcb.BaudRate = baudRate;
    dcb.Parity = (byte)parity;
    dcb.ByteSize = (byte)dataBits;

    // Clear Handshake flags
    dcb.fOutxCtsFlow = 0;
    dcb.fOutX = 0;
    dcb.fInX = 0;
    dcb.fRtsControl = 0;

    // Set Handshake flags
    switch (hs)
    {
    case Handshake_None:
        break;
    case Handshake_XonXoff:
        dcb.fOutX = 1;
        dcb.fInX = 1;
        break;
    case Handshake_RequestToSend:
        dcb.fOutxCtsFlow = 1;
        dcb.fRtsControl = 1;
        break;
    case Handshake_RequestToSendXonXoff:
        dcb.fOutX = 1;
        dcb.fInX = 1;
        dcb.fOutxCtsFlow = 1;
        dcb.fRtsControl = 1;
        break;
    default: // Shouldn't happen
        break;
    }

    if (!SetCommState(handle, &dcb))
    {
        return GetLastError();
    }
    return S_OK;
}