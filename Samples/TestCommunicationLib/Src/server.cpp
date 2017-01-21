#include <iostream>
#include "PX4API.h"

#include <vector>

using namespace std;

#define SIMULATOR_PORT 14550

int main()
{

    //PX4Communicator *PX4 = new PX4Communicator(SIMULATOR_PORT);

    PX4API *px4 = new PX4API(SIMULATOR_PORT);

    usleep(2500000);
    px4->Arm();

    usleep(2500000);
    px4->StartAutopilot(0,0,-3);
    usleep(2500000);


    px4->setTargetLocalPosition(-4,-4,-4);
    usleep(5000000);
    px4->setTargetLocalPosition(5,5,-4);
    usleep(5000000);
    px4->setTargetLocalPosition(0,0,-1);
    usleep(5000000);

    px4->StopAutopilot();

    while(true){
       usleep(5000);
    }

}

