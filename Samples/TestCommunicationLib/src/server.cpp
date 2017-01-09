#include <iostream>
#include "UdpSocketPort.h"
#include "PX4Communicator.h"
#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

using namespace std;

#define SIMULATOR_PORT 14550


int main()
{

    PX4Communicator *PX4 = new PX4Communicator(SIMULATOR_PORT);
    PX4->Arm();
    PX4->TakeoffLocal(5);
    while(true){}
}

