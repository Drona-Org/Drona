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
    PX4->SetPosition(0,0,-5);
    PX4->StartAutopilot();
    usleep(5000000);


    int rounds = 2;
    float eps_close = 0.25;
    float loit_step = 0.2;
    float loit_radius = 3;
    float square_edge = 5;
    vector< vector<float> > waypoints( 2, vector< float >(3) );
    waypoints[0][0] = 0;   waypoints[0][1] = 0;   waypoints[0][2] = -5;
    waypoints[1][0] = 10;   waypoints[1][1] = 3;   waypoints[1][2] = -3;

    PX4->FollowTrajectory(waypoints,rounds,eps_close);

    PX4->Loiter(waypoints[0],loit_radius,rounds,eps_close,loit_step);

    PX4->Square(waypoints[0],square_edge,rounds,eps_close);


    //PX4->StopAutopilot();

    while(true){
       usleep(5000);
    }

}

