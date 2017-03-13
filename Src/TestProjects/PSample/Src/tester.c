#include "PingPong.h"

void ErrorHandler(PRT_STATUS status, PRT_MACHINEINST *ptr)
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



static PRT_BOOLEAN cooperative = PRT_FALSE;
static int threads = 1;

// todo: make tester useful for performance testing also, not finished yet...
static PRT_BOOLEAN perf = PRT_FALSE;
static long steps = 0;
static long startTime = 0;
static long perfEndTime = 0;
static const char* parg = NULL;
static const char* workspaceConfig;

void Log(PRT_STEP step, PRT_MACHINESTATE *senderState, PRT_MACHINEINST *receiver, PRT_VALUE* event, PRT_VALUE* payload)
{ 
    PrtPrintStep(step, senderState, receiver, event, payload);
}

static PRT_BOOLEAN ParseCommandLine(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        char* arg = argv[i];
        if (arg[0] == '-' || arg[0] == '/')
        {
            if (strcasecmp(arg + 1, "cooperative") == 0)
            {
                cooperative = PRT_TRUE;
            }
            else if (strcasecmp(arg + 1, "threads") == 0)
            {
                if (i + 1 < argc)
                {
                    threads = atoi(argv[++i]);
                    if (threads <= 0)
                    {
                        threads = 1;
                    }
                }
            }
            else if (strcasecmp(arg + 1, "perf") == 0)
			{
				if (i + 1 < argc)
				{
					perf = PRT_TRUE;
					perfEndTime = atoi(argv[++i]);
					if (perfEndTime <= 0)
					{
						perfEndTime = 1;
					}
				}
			}
            else if (strcasecmp(arg + 1, "w") == 0)
			{
				if (i + 1 < argc)
				{
					workspaceConfig = argv[++i];
				}
			}
            else if (strcasecmp(arg + 1, "arg") == 0)
			{
				if (i + 1 < argc)
				{
					parg = argv[++i];
				}
			}
            else if (strcasecmp(arg + 1, "h") == 0 || strcasecmp(arg + 1, "help") == 0 || strcasecmp(arg + 1, "?") == 0)
            {
                return PRT_FALSE;
            }
            else
            {
                printf("Unknown argument: '%s'\n", arg);
                return PRT_FALSE;
            }
        }
        else 
        {
            printf("Unknown argument: '%s'\n", arg);
            return PRT_FALSE;
        }
    }
    return PRT_TRUE;
}

static void PrintUsage(void)
{
    printf("Usage: Tester [options]\n");
    printf("This program tests the compiled state machine in program.c and program.h\n");
    printf("Options:\n");
	printf("	-w [path]		[path] represents the path to the workspace config file\n");
    printf("   -cooperative     run state machine with the cooperative scheduler\n");
	printf("   -threads [n]     run P using multiple threads\n");
	printf("   -perf [n]        run performance test that outputs #steps every 10 seconds, terminating after n seconds\n");
	printf("   -arg [x]         pass argument 'x' to P main machine\n");
}

static void RunPerfTest()
{

}

void MyAssert(PRT_INT32 condition, PRT_CSTRING message)
{
	if (condition != 0)
	{
		return;
	}
	else if (message == NULL)
	{
		fprintf_s(stderr, "ASSERT");
	}
	else
	{
		fprintf_s(stderr, "ASSERT: %s", message);
	}
	exit(1);
}


static void RunToIdle(void* process)
{
    // In the tester we run the state machines until there is no more work to do then we exit
    // instead of blocking indefinitely.  This is then equivalent of the non-cooperative case
    // where we PrtRunStateMachine once (inside PrtMkMachine).  So we do NOT call PrtWaitForWork.
    
    PRT_PROCESS_PRIV* privateProcess = (PRT_PROCESS_PRIV*)process;
	while (privateProcess->terminating == PRT_FALSE)
	{
		PRT_STEP_RESULT result = PrtStepProcess(process);
		switch (result) {
		case PRT_STEP_TERMINATING:
			break;
		case PRT_STEP_IDLE:
			PrtWaitForWork(process);
			break;
		case PRT_STEP_MORE:
			PrtYieldThread();
			break;
		}
	}
}

extern int Delta;

int main(int argc, char *argv[])
{
    if (!ParseCommandLine(argc, argv))
    {
        PrintUsage();
        return 1;
    }

    printf("Press any key to start simulation\n");
    getchar();

	{
		PRT_PROCESS *process;
		PRT_GUID processGuid;
		PRT_VALUE *payload;

		processGuid.data1 = 1;
		processGuid.data2 = 0;
		processGuid.data3 = 0;
		processGuid.data4 = 0;
		process = PrtStartProcess(processGuid, &P_GEND_PROGRAM, ErrorHandler, Log);
        if (cooperative)
        {
            PrtSetSchedulingPolicy(process, PRT_SCHEDULINGPOLICY_COOPERATIVE);
        }
		if (parg == NULL)
		{
			payload = PrtMkNullValue();
		}
		else
		{
			int i = atoi(parg);
			payload = PrtMkIntValue(i);
		}

		PrtUpdateAssertFn(MyAssert);

        PrtMkMachine(process, P_MACHINE_Main, 1, PRT_FUN_PARAM_CLONE, payload);

        if (cooperative)
        {
            // test some multithreading across state machines.
            typedef void *(*start_routine) (void *);
            pthread_t tid[threads];
            for (int i = 0; i < threads; i++)
            {
                pthread_create(&tid[i], NULL, (start_routine)RunToIdle, (void*)process);
            }
            for (int i = 0; i < threads; i++)
            {
                pthread_join(tid[i], NULL);
            }
        }
		PrtFreeValue(payload);
		PrtStopProcess(process);
	}

	//_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_DEBUG);
	//_CrtDumpMemoryLeaks();
}

void P_DTOR_Main_IMPL(PRT_MACHINEINST *context)
{
}

void P_DTOR_PONG_IMPL(PRT_MACHINEINST *context)
{
}

void P_CTOR_Main_IMPL(PRT_MACHINEINST *context, PRT_VALUE *value)
{
}

void P_CTOR_PONG_IMPL(PRT_MACHINEINST *context, PRT_VALUE *value)
{
}
