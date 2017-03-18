#include <iostream>
#include <vector>

#include "PX4API.h"
#include "WorkspaceParser.h"

using namespace std;

#define SIMULATOR_PORT 14550

int main()
{

    PX4API *px4 = new PX4API(SIMULATOR_PORT);
    vector< WS_Coord > goals = {WS_Coord(3,3,-3),WS_Coord(-3,7,-3),WS_Coord(0,10,-3),WS_Coord(3,7,-3),WS_Coord(-3,3,-3),WS_Coord(0,0,-3)};
    double eps = 1;


    usleep(2500000);
    px4->Arm();
    usleep(2500000);
    px4->StartAutopilot(0,0,-3);
    usleep(5000000);

    // Execute mission
    px4->StartLogger();
    for(int i=0; i<goals.size(); i++){
        px4->GoTo(goals[i].x,goals[i].y,goals[i].z,eps);
    }


    while(true){
       usleep(5000);
    }

    px4->StopLogger();

}

