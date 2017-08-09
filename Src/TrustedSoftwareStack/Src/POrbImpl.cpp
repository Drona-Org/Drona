#include "POrb.h"
#include "linker.h"
#include <iostream>
#include "PX4Driver.h"
#include "WorkspaceParser.h"
using namespace std;

#define SIMULATOR_PORT 14550

//Declare the PX4 driver variable
PX4API* PX4Driv = NULL;


extern "C" {

    PRT_VALUE *P_FUN_POrbMachine_InitializeDisPatchListener_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE **payload)
	{
        //initialized the PX4
        PX4Driv = new PX4API(SIMULATOR_PORT);
        PX4Communicator::POrbMachine = PrtGetMachine(MAIN_P_PROCESS, *payload);
        return NULL;
	}
}

void P_DTOR_POrbMachine_IMPL(PRT_MACHINEINST *context)
{
}


void P_CTOR_POrbMachine_IMPL(PRT_MACHINEINST *context, PRT_VALUE *value)
{
}
