#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <ros/console.h>
#include "MainDroneTaskPlanner.h"
#include "Prt.h"
#include <stdio.h>
#include <cstring>

PRT_PROCESS* MAIN_P_PROCESS;
static PRT_BOOLEAN cooperative = PRT_TRUE;
static int threads = 1; // NOTE: Change this depending on which monitors are running in TaskPlanner
long threadsRunning = 0;
pthread_mutex_t threadsRunning_mutex;
static PRT_BOOLEAN perf = PRT_FALSE;
static long steps = 0;
static long startTime = 0;
static long perfEndTime = 0;
static char* FirstArgument = NULL;
static const char* parg = NULL;

void ErrorHandler(PRT_STATUS status, PRT_MACHINEINST* ptr) {
	if (status == PRT_STATUS_ASSERT) {
		fprintf_s(stdout, "exiting with PRT_STATUS_ASSERT (assertion failure)\n");
		exit(1);
	} else if (status == PRT_STATUS_EVENT_OVERFLOW) {
		fprintf_s(stdout, "exiting with PRT_STATUS_EVENT_OVERFLOW\n");
		exit(1);
	} else if (status == PRT_STATUS_EVENT_UNHANDLED) {
		fprintf_s(stdout, "exiting with PRT_STATUS_EVENT_UNHANDLED\n");
		exit(1);
	} else if (status == PRT_STATUS_QUEUE_OVERFLOW) {
		fprintf_s(stdout, "exiting with PRT_STATUS_QUEUE_OVERFLOW \n");
		exit(1);
	} else if (status == PRT_STATUS_ILLEGAL_SEND) {
		fprintf_s(stdout, "exiting with PRT_STATUS_ILLEGAL_SEND \n");
		exit(1);
	} else {
		fprintf_s(stdout, "unexpected PRT_STATUS in ErrorHandler: %d\n", status);
		exit(2);
	}
}

void Log(PRT_STEP step, PRT_MACHINESTATE *senderState, PRT_MACHINEINST *receiver, PRT_VALUE* event, PRT_VALUE* payload) {
	PrtPrintStep(step, senderState, receiver, event, payload);
}

void decrement_threadsRunning() {
    pthread_mutex_lock(&threadsRunning_mutex);
    threadsRunning = threadsRunning - 1;
    pthread_mutex_unlock(&threadsRunning_mutex);
}

long get_threadsRunning() {
    long c;
    pthread_mutex_lock(&threadsRunning_mutex);
    c = threadsRunning;
    pthread_mutex_unlock(&threadsRunning_mutex);
    return (c);
}

void PRT_CALL_CONV MyAssert(PRT_INT32 condition, PRT_CSTRING message) {
    if (condition != 0) {
        return;
    } else if (message == NULL) {
        fprintf_s(stderr, "ASSERT");
    } else {
        fprintf_s(stderr, "ASSERT: %s", message);
    }
    exit(1);
}

static void RunToIdle(void* process) {
    // In the tester we run the state machines until there is no more work to do then we exit
    // instead of blocking indefinitely.  This is then equivalent of the non-cooperative case
    // where we PrtRunStateMachine once (inside PrtMkMachine).  So we do NOT call PrtWaitForWork.
    // PrtWaitForWork((PRT_PROCESS*)process);
    PRT_PROCESS_PRIV* privateProcess = (PRT_PROCESS_PRIV*)process;
    while (privateProcess->terminating == PRT_FALSE)
    {
        if (PRT_STEP_IDLE == PrtStepProcess((PRT_PROCESS*)process))
        {
            // break;
        }
    }
    decrement_threadsRunning();
}

char* GetApplicationName() {
	char* last = strrchr(FirstArgument, '/');
	char* last2 = strrchr(FirstArgument, '\\');

	if (last != NULL) {
		return last + 1;
	} if (last2 != NULL) {
		return last2 + 1;
	}
	return FirstArgument;
}

// Initializes our ROS program as well the P program used to execute the case study.
int main(int argc, char *argv[]) {
    ros::init(argc, argv, "drona_test");
    PRT_DBG_START_MEM_BALANCED_REGION
    {
        PRT_GUID processGuid;
        PRT_VALUE *payload;

        // PrtInitialize(&P_GEND_PROGRAM);
        processGuid.data1 = 1;
        processGuid.data2 = 0;
        processGuid.data3 = 0;
        processGuid.data4 = 0;
        MAIN_P_PROCESS = PrtStartProcess(processGuid, &P_GEND_IMPL_DefaultImpl, ErrorHandler, Log);
        
        if (cooperative) {
            PrtSetSchedulingPolicy(MAIN_P_PROCESS, PRT_SCHEDULINGPOLICY_COOPERATIVE);
        }
        if (parg == NULL) {
            payload = PrtMkNullValue();
        } else {
            int i = atoi(parg);
            payload = PrtMkIntValue(i);
        }

        PrtUpdateAssertFn(MyAssert);
        PRT_UINT32 machineId;
        PRT_BOOLEAN foundMainMachine = PrtLookupMachineByName("TestDriver", &machineId); // Sets up the P program, but starting at the Task Planner.
        
        if (foundMainMachine == PRT_FALSE) {
            printf("%s\n", "FAILED TO FIND TestDriver");
            exit(1);
        }
       
        PrtMkMachine(MAIN_P_PROCESS, machineId, 1, &payload);

        if (cooperative) {
            typedef void *(*start_routine) (void *);
            pthread_t tid[threads];
            for (int i = 0; i < threads; i++)
            {
                threadsRunning++;
                pthread_create(&tid[i], NULL, (start_routine)RunToIdle, (void*)MAIN_P_PROCESS);
            }
            while(get_threadsRunning() != 0);

        }
        PrtFreeValue(payload);
        PrtStopProcess(MAIN_P_PROCESS);
    }
    PRT_DBG_END_MEM_BALANCED_REGION
}
