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

    mavlink_set_position_target_local_ned_t sp;

    PX4->Arm();
    usleep(500000);

    PX4->Takeoff(491);
    usleep(5000000);

    PX4->SetPosition(5,5,-5,sp);
    PX4->UpdateSetpoint(sp);
    usleep(250000);

    PX4->StartAutopilot();
    usleep(10000000);
    PX4->StopAutopilot();

    while(true){}

}

