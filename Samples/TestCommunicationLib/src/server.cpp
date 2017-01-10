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

    PX4->Takeoff(492.11);
    sleep(5);
    PX4->GoTo(0,0,-10);
    //ssleep(5);
    PX4->StartOffBoard();
    //sleep(5);
    //PX4->GoTo(0,0,-2);
    //sleep(5);
    //PX4->ReturnToLaunch();
    for(int i=1; i<20; i++){
        PX4->GoTo(0,0,-10);
        usleep(500000);
        cout<<"yo"<<endl;
    }

    PX4->StopOffBoard();

    while(true){}

}

