#include <iostream>
#include "PlanGenerator.h"
#include "PX4API.h"
#include "WorkspaceParser.h"
using namespace std;

#define SIMULATOR_PORT 14550


WS_Coord shiftBy = WS_Coord(25, 25, 0);

WS_Coord PlannerToGazebo(WS_Coord coord) {
    return WS_Coord(coord.x - shiftBy.x, coord.y - shiftBy.y, coord.z - shiftBy.z);
}

WS_Coord GazeboToPlanner(WS_Coord coord) {
    return WS_Coord(coord.x + shiftBy.x, coord.y + shiftBy.y, coord.z + shiftBy.z);
}

int main(int argc, char const *argv[])
{

    PX4API *px4 = new PX4API(SIMULATOR_PORT);
    char filename[] = "traj.csv";
    PX4Logger *px4logger = new PX4Logger(10, filename, true, vector<bool>{true, true, true});
    double eps = 1;


    usleep(2500000);
    px4->Arm();
    usleep(2500000);
    px4->StartAutopilot(0,0,-3); //takeoff
    usleep(5000000);

    px4logger->Start();

    //test OMPL planner
    vector<WS_Coord> destinations = {
        WS_Coord(25, 25, 3),
        WS_Coord(40, 40, 2),
        WS_Coord(4, 40, 1),
        WS_Coord(40, 4, 2),
        WS_Coord(4, 4, 2)
    };
    OMPLPLanner* planner = new OMPLPLanner(argv[1], PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
    for(int i = 0; i< destinations.size()-1; i++)
    {

        vector<WS_Coord> path = planner->GeneratePlan(5, destinations.at(i), destinations.at(i+1));
        for (int count = 0; count < path.size(); count++)
        {
            WS_Coord shifted = PlannerToGazebo(path.at(count));
            cout << shifted.ToString() << endl;
            px4->GoTo(shifted.y, shifted.x, -shifted.z, 1);
        }
    }
    px4logger->Stop();
    px4logger->ToCSV();

	return 0;
}
