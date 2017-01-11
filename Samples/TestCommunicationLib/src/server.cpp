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
    usleep(500000);

    PX4->Takeoff(500.11);
    usleep(5000000);

    PX4->SetPosition(0,0,0,0);
    PX4->StartOffBoard();
    usleep(500000);

    // Go crazy
    float quat[4] = { 1,0.1,0,0 };
    float rates[4] = { 0.1,0,0,0.5 };
    for(int i=1; i<10; i++){
        PX4->SetAttitude(quat,rates);
        usleep(500000);
    }


    // Go somewhere
    for(int i=1; i<10; i++){
        PX4->SetPosition(i,i,i,0);
        usleep(500000);
    }

    // Go crazy back
    quat[1] = -0.1;
    for(int i=1; i<20; i++){
        //PX4->GoTo(i,0,-10);
        PX4->SetAttitude(quat,rates);
        usleep(500000);
    }
    PX4->StopOffBoard();

    // Go home
    PX4->ReturnToLaunch();

    while(true){}

}

