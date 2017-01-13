#include <iostream>
#include "PX4Communicator.h"

using namespace std;

#define SIMULATOR_PORT 14550

int main()
{

    PX4Communicator *PX4 = new PX4Communicator(SIMULATOR_PORT);

    PX4->Arm();
    usleep(500000);

    PX4->Takeoff(491);
    usleep(5000000);


    // Set a target position and start the autopilot
    PX4->SetPosition(5,5,-5);
    PX4->StartAutopilot();
    usleep(10000000);

    // Change target position and yaw
    PX4->SetPosition(-5,5,-10);
    usleep(10000000);

    PX4->StopAutopilot();

    while(true){}

}

