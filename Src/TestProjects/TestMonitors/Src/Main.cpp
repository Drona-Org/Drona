#include <iostream>
#include "PlanGenerator.h"
#include "PX4Driver.h"
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

static void StopAutoPilot(void* px4arg)
{
    PX4API *px4 = (PX4API*)px4arg;
    sleep(10);
    printf("Stoping autopilot\n");
    px4->StopAutopilot();
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
        WS_Coord(0, 0, 3),
        WS_Coord(2, 2, 4),
        WS_Coord(4, 4, 6),
        WS_Coord(10, 10, 5)
//        WS_Coord(-21.56, 15.12, 4),
//        WS_Coord(18.7, -2.3, 6),
//        WS_Coord(0.69, -2.8, 3),
//        WS_Coord(-20.5, -6, 6),
//        WS_Coord(-21, -16, 4),
//        WS_Coord(-21.56, 15.12, 4),
//        WS_Coord(-6.8, -22, 4),
//        WS_Coord(1.17, -16.4, 5),
//        WS_Coord(0.69, -2.81, 6),
//        WS_Coord(-5.3, 18.3, 5),
//        WS_Coord(-21.56, 15.12, 4),
//        WS_Coord(-20.52, -0.59, 5),
//        WS_Coord(0.69, -2.81, 6),
//        WS_Coord(18.78, -2.31, 6),
//        WS_Coord(17.72, -22.08, 2),
//        WS_Coord(0.69, -2.8, 3),
//        WS_Coord(1.17, -16.4, 5),
//        WS_Coord(0.69, -2.81, 6),
//        WS_Coord(-5.3, 18.3, 5),
//        WS_Coord(-21.56, 15.12, 4),
    };

    OMPLPLanner* planner = new OMPLPLanner(argv[1], PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
    typedef void *(*start_routine) (void *);
    pthread_t tid;
    pthread_create(&tid, NULL, (start_routine)StopAutoPilot, (void*)px4);
    for(int i = 0; i< destinations.size()-1; i++)
    {

        vector<WS_Coord> path = planner->GeneratePlan(1, GazeboToPlanner(destinations.at(i)), GazeboToPlanner(destinations.at(i+1)));
        //convert the path into goto of length less than 10
        vector<WS_Coord> pathNew = path;//ConvertToSmallGotos(path);

        for (int count = 0; count < pathNew.size(); count++)
        {
            WS_Coord shifted = PlannerToGazebo(pathNew.at(count));
            cout << shifted.ToString() << endl;
            px4->GoTo(shifted.y, shifted.x, -shifted.z, 1);
        }
    }

    px4logger->Stop();
    px4logger->ToCSV();

	return 0;
}
