#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <ros/console.h>
#include "Test.h"
#include "Prt.h"
#include <stdio.h>

/* Global variables */
PRT_PROCESS* ContainerProcess;
PRT_INT64 sendMessageSeqNumber = 0;

void ErrorHandler(PRT_STATUS status, PRT_MACHINEINST* ptr)
{
	if (status == PRT_STATUS_ASSERT)
	{
		fprintf_s(stdout, "exiting with PRT_STATUS_ASSERT (assertion failure)\n");
		exit(1);
	}
	else if (status == PRT_STATUS_EVENT_OVERFLOW)
	{
		fprintf_s(stdout, "exiting with PRT_STATUS_EVENT_OVERFLOW\n");
		exit(1);
	}
	else if (status == PRT_STATUS_EVENT_UNHANDLED)
	{
		fprintf_s(stdout, "exiting with PRT_STATUS_EVENT_UNHANDLED\n");
		exit(1);
	}
	else if (status == PRT_STATUS_QUEUE_OVERFLOW)
	{
		fprintf_s(stdout, "exiting with PRT_STATUS_QUEUE_OVERFLOW \n");
		exit(1);
	}
	else if (status == PRT_STATUS_ILLEGAL_SEND)
	{
		fprintf_s(stdout, "exiting with PRT_STATUS_ILLEGAL_SEND \n");
		exit(1);
	}
	else
	{
		fprintf_s(stdout, "unexpected PRT_STATUS in ErrorHandler: %d\n", status);
		exit(2);
	}
}

void Log(PRT_STEP step, PRT_MACHINESTATE* senderState, PRT_MACHINEINST* receiver, PRT_VALUE* event, PRT_VALUE* payload)
{
	PrtPrintStep(step, senderState, receiver, event, payload);
}

static char* FirstArgument = NULL;

char* GetApplicationName()
{
	char* last = strrchr(FirstArgument, '/');
	char* last2 = strrchr(FirstArgument, '\\');

	if (last != NULL)
	{
		return last + 1;
	}
	if (last2 != NULL)
	{
		return last2 + 1;
	}
	return FirstArgument;
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "p_test");

	PRT_PROCESS* process;
	PRT_GUID processGuid;
	PRT_VALUE* payload;
	processGuid.data1 = 1;
	processGuid.data2 = 0;
	processGuid.data3 = 0;
	processGuid.data4 = 0;
	process = PrtStartProcess(processGuid, &P_GEND_IMPL_DefaultImpl, ErrorHandler, Log);
	payload = PrtMkNullValue();
	PRT_UINT32 machineId;
	PRT_BOOLEAN foundMainMachine = PrtLookupMachineByName("Project", &machineId);
	if (foundMainMachine == PRT_FALSE)
	{
		printf("%s\n", "FAILED TO FIND Project");
		exit(1);
	}
	PrtMkMachine(process, machineId, 1, &payload);
	PrtFreeValue(payload);
	PrtStopProcess(process);
}
