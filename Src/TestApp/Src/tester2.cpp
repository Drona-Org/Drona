// TestApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <filesystem>
#include <fstream>
#include "TestBootSystem.h"
#include "DgmlGraphWriter.h"
#include "TcpSocketPort.h"
#include "UdpSocketPort.h"
#include "SerialPort.h"
#include "POrbMavlink.h"
#include <ppltasks.h>
#include <WinSock2.h>

using namespace concurrency;
PRT_PROCESS* MAIN_APPLICATION_PROCESS = NULL;
DgmlGraphWriter dgmlMonitor;
bool dgmlTrace = false;
bool portUdp = false;
bool trace = false;
const char* portName = NULL;

void DebugPrintf(PRT_CSTRING msg)
{
  OutputDebugStringA(msg);
}

void ErrorHandler(PRT_STATUS status, PRT_MACHINEINST *ptr)
{
  if (status == PRT_STATUS_ASSERT)
  {
    EventTrace(PRuntime, status, "exiting with PRT_STATUS_ASSERT (assertion failure)\n");
    exit(1);
  }
  else if (status == PRT_STATUS_EVENT_OVERFLOW)
  {
    EventTrace(PRuntime, status, "exiting with PRT_STATUS_EVENT_OVERFLOW\n");
    exit(1);
  }
  else if (status == PRT_STATUS_EVENT_UNHANDLED)
  {
    EventTrace(PRuntime, status, "exiting with PRT_STATUS_EVENT_UNHANDLED\n");
    exit(1);
  }
  else if (status == PRT_STATUS_QUEUE_OVERFLOW)
  {
    EventTrace(PRuntime, status, "exiting with PRT_STATUS_QUEUE_OVERFLOW \n");
    exit(1);
  }
  else if (status == PRT_STATUS_ILLEGAL_SEND)
  {
    EventTrace(PRuntime, status, "exiting with PRT_STATUS_ILLEGAL_SEND \n");
    exit(1);
  }
  else
  {
    EventTrace(PRuntime, status, "unexpected PRT_STATUS in ErrorHandler: %d\n", status);
    exit(2);
  }
}

std::wstring ConvertToUnicode(const char* str)
{
  std::string temp(str == NULL ? "" : str);
  return std::wstring(temp.begin(), temp.end());
}

std::wstring GetMachineName(PRT_MACHINEINST_PRIV *context)
{
  PRT_MACHINEDECL* machine = context->process->program->machines[context->instanceOf];
  return ConvertToUnicode((const char*)machine->name);
}

static void LogHandler(PRT_STEP step, PRT_MACHINESTATE *state, PRT_MACHINEINST *receiver, PRT_VALUE* event, PRT_VALUE* payload)
{
  if (!dgmlTrace)
  {
    if (trace) {
      PrtPrintStep(step, state, receiver, event, payload);
    }
    return;
  }

  PRT_MACHINEINST_PRIV * c = (PRT_MACHINEINST_PRIV *)receiver;
  std::wstring machineName = GetMachineName(c);
  PRT_UINT32 machineId = c->id->valueUnion.mid->machineId;
  std::wstring stateName;
  if (state == NULL) {
    stateName = L"unknown";
  }
  else {
    stateName = ConvertToUnicode((const char*)PrtGetCurrentStateDecl(c)->name);
  }
  char number[20]; // longest 32 bit integer in base 10 is 10 digits, plus room for null terminator.
  _itoa_s(machineId, number, 20, 16);
  std::wstring machineInstance = ConvertToUnicode(number);

  std::wstring eventName;
  std::wstring stateId = machineName + L"." + stateName;
  std::wstring stateLabel = stateName;
  std::wstring senderMachineName; 
  std::wstring senderStateName;
  std::wstring senderStateId;
  std::wstring senderStateLabel;
  if (state != NULL)
  {
    _itoa_s(state->machineId, number, 20, 16);
    std::wstring senderMachineInstance = ConvertToUnicode(number);
    senderMachineName = ConvertToUnicode(state->machineName);
    senderStateName = ConvertToUnicode(state->stateName);
    senderStateId = senderMachineName + L"." + senderStateName;
    senderStateLabel = senderStateName;
  }
  if (event != NULL)
  {
    eventName = ConvertToUnicode((const char*)c->process->program->events[PrtPrimGetEvent(event)].name);
  }

  switch (step)
  {
  case PRT_STEP_HALT:
    dgmlMonitor.NavigateLink(stateId.c_str(), stateLabel.c_str(), stateId.c_str(), stateLabel.c_str(), L"halt", 0);
    break;
  case PRT_STEP_ENQUEUE:
    break;
  case PRT_STEP_DEQUEUE:
    dgmlMonitor.NavigateLink(senderStateId.c_str(), senderStateLabel.c_str(), stateId.c_str(), stateLabel.c_str(), eventName.c_str(), 0);
    break;
  case PRT_STEP_ENTRY:
    EventTrace(PProgram, 0, "Entering state: %S on machine %S\n", stateName.c_str(), machineName.c_str());
    dgmlMonitor.NavigateToNode(stateId.c_str(), stateLabel.c_str());
    break;
  case PRT_STEP_CREATE:
    break;
  case PRT_STEP_RAISE:
    break;
  case PRT_STEP_POP:
    EventTrace(PProgram, 0, "Popping back to state: %S on machine %S\n", stateName.c_str(), machineName.c_str());
    dgmlMonitor.NavigateToNode(stateId.c_str(), stateLabel.c_str());
    break;
  case PRT_STEP_PUSH:
    break;
  case PRT_STEP_UNHANDLED:
    break;
  case PRT_STEP_DO:
    break;
  case PRT_STEP_EXIT:
    break;
  case PRT_STEP_IGNORE:
    break;
  }

}

bool ParseCommandLine(int argc, char* argv[])
{
  // parse command line
  for (int i = 1; i < argc; i++)
  {
    const char* arg = argv[i];
    if (arg[0] == '-' || arg[0] == '/')
    {
      std::string lower(arg + 1);
      _strlwr_s((char*)lower.c_str(), lower.length() + 1);
      if (lower == "udp")
      {
        if (i + 1 < argc)
        {
          portUdp = true;
          portName = argv[++i];
        }
        else
        {
          printf("### Error: missing ip address after -udp argument\n");
          return false;
        }
      }
      else if (lower == "com")
      {
        portUdp = false;
        if (i + 1 < argc)
        {
          portName = argv[++i];
        }
      }
      else if (lower == "h" || lower == "?" || lower == "help" || lower == "-help")
      {
        return false;
      }
      else if (lower == "dgml")
      {
        dgmlTrace = true;
      }
      else if (lower == "trace")
      {
        trace = true;
      }
      else
      {
        printf("### Error: unexpected argument: %s\n", arg);
        return false;
      }
    }
    else
    {
      printf("### Error: unexpected argument: %s\n", arg);
      return false;
    }
  }
  return true;
}

void PrintUsage() {
  printf("Usage: PX4 [-udp ipaddr] [-com port]\n");
  printf("Connects to PX4 either over udp or serial COM port\n");
  printf("If no arguments it will find a COM port matching PX4\n");
}

void P_CTOR_Main_IMPL(PRT_MACHINEINST *context, PRT_VALUE *value)
{
}
void P_DTOR_Main_IMPL(PRT_MACHINEINST *context)
{
}

void MyAssert(PRT_INT32 condition, PRT_CSTRING message)
{
  if (!condition)
  {
    if (message != nullptr)
    {
      EventTrace(PRuntime, PRT_STATUS_ASSERT, message);
    }
    exit(1);
  }
}

std::wstring FindDgmlFile(char* exe) {

  std::tr2::sys::path path(exe);
  path.replace_filename("px4_trace.dgml");

  std::wstring dgml = path.wstring();
  DWORD attrs = GetFileAttributesW(path.c_str());
  if (attrs == INVALID_FILE_ATTRIBUTES)
  {
    std::ofstream myFile(dgml);   
    myFile << "<DirectedGraph xmlns='http://schemas.microsoft.com/vs/2009/dgml'/>";
  }

  return path.wstring();
}

#define COOPERATIVE 

void RunMachine() {

  PRT_GUID processGuid;
  processGuid.data1 = 1;
  processGuid.data2 = 0;
  processGuid.data3 = 0;
  processGuid.data4 = 0;
  MAIN_APPLICATION_PROCESS = PrtStartProcess(processGuid, &P_GEND_PROGRAM, ErrorHandler, LogHandler);
#ifdef COOPERATIVE
  PrtSetSchedulingPolicy(MAIN_APPLICATION_PROCESS, PRT_SCHEDULINGPOLICY_COOPERATIVE);
#endif
  PrtUpdateAssertFn(&MyAssert);

  //create the main machine
  PrtMkMachine(MAIN_APPLICATION_PROCESS, P_MACHINE_MissionPlannerMachine, 0);

#ifdef COOPERATIVE
  // now run the machine
  while (true)
  {
    PRT_STEP_RESULT result = PrtStepProcess(MAIN_APPLICATION_PROCESS);
    if (result == PRT_STEP_TERMINATING)
    {
      break;
    }
    else if (result == PRT_STEP_IDLE)
    {
      PrtWaitForWork(MAIN_APPLICATION_PROCESS);
    }
  
    // this helps ensure our Timer can callback...
    SleepEx(1, TRUE);
  }
#endif
}

#define DEFAULT_MAVLINK_PORT 14550

Port* OpenPort(bool isUdp, const char* portAddress) 
{
  if (isUdp)
  {
    if (UdpSocketPort::Initialize() != 0)
    {
      EventTrace(Communication, E_FAIL, "Could not initialize sockets\n");
      return NULL;
    }
    UdpSocketPort::Initialize();
    UdpSocketPort* socket = new UdpSocketPort();

    HRESULT hr = socket->Connect(portAddress, DEFAULT_MAVLINK_PORT);
    if (hr != 0)
    {
      EventTrace(Communication, hr, "Could not open the socket to %s, error=%d\n", portAddress, hr);
      if (hr == ERROR_ACCESS_DENIED)
      {
        EventTrace(Communication, hr, "Error ERROR_ACCESS_DENIED, is another app using the port?\n");
      }
      return NULL;
    }
    return socket;
  }
  else
  {
    int baudRate = 115200;
    int dataBits = 8;
    bool dtr_enable = false;
    bool rts_enable = false;
    int readTimeout = -1;
    int write_timeout = 500;
    int readBufferSize = 16384;
    int writeBufferSize = 2048;
    const char* initString = "sh /etc/init.d/rc.usb\n";
    int hr = 0;

    SerialPort * serial = new SerialPort();
    std::string name(portAddress == NULL ? "" : portAddress);
    if (portAddress == NULL)
    {
      hr = serial->Find("PX4", name);
      if (hr != 0 || name.length() == 0)
      {
        EventTrace(Communication, hr, "### Error: could not find the PX4 Serial Port");
        return NULL;
      }
      else
      {
        EventTrace(Communication, hr, "Opening PX4 SerialPort on %s\n", name.c_str());
      }
    }
    hr = serial->Open(name.c_str(), baudRate, dataBits, Parity_None, StopBits_10, dtr_enable, rts_enable, Handshake_None, readTimeout, write_timeout, readBufferSize, writeBufferSize);
    if (hr != 0)
    {
      EventTrace(Communication, hr, "Could not open the COM port %s, error=%d\n", name.c_str(), hr);
      if (hr == ERROR_ACCESS_DENIED)
      {
        EventTrace(Communication, hr, "Error ERROR_ACCESS_DENIED, is another app using the COM port?\n");
      }
      return NULL;
    }

    // send this right away.
    hr = serial->Write((byte*)initString, (int)strlen(initString));

    return serial;
  }

}

int main(int argc, char *argv[])
{
  EventLog log("trace.txt");

  if (!ParseCommandLine(argc, argv))
  {
    PrintUsage();
    return 1;
  }

  if (dgmlTrace)
  {
    char ipAddress[80];
    UdpSocketPort::Initialize();
    HRESULT hr = UdpSocketPort::GetLocalAddress(ipAddress, 80);
    if (hr != 0)
    {
      printf("Cannot find your local ip address (hr=%x), do you have ethernet?\n", hr);
      return 1;
    }
    dgmlMonitor.Connect(ipAddress);
    std::wstring file = FindDgmlFile(argv[0]);
    dgmlMonitor.LoadGraph(file.c_str());
  }

  Port* port = OpenPort(portUdp, portName);
  if (port == NULL)
  {
    return 1;
  }

  // setup the foreign types so that we can create PRT_VALUES before starting the process.
  PrtSetForeignTypes(&P_GEND_PROGRAM);

  if (!POrbMavlink::Initialize(port))
  {
    return 1;
  }

  RunMachine();
  while (true)
  {
    // this allows the timer to fire.
    SleepEx(1, TRUE);
  }

  port->Close();
  PrtStopProcess(MAIN_APPLICATION_PROCESS);
}
