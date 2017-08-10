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

bool incontrol = false;
pthread_mutex_t getlock;

static void StopAutoPilot(void* px4arg)
{
    PX4API *px4 = (PX4API*)px4arg;
    WS_Box geofence = WS_Box(WS_Coord(-9, -9, -2), WS_Coord(9, 9, 9));
    while(true)
    {
        mavlink_local_position_ned_t act_pos = ROBOTSTATE->GetLocalPosition();

        if (!geofence.IsInBox(WS_Coord(act_pos.x, act_pos.y, -act_pos.z))){
            pthread_mutex_lock(&getlock);
            ERROR("============================================");
            ERROR("DRONE IS VERY CLOSE TO GEO FENCE !!\n");
            ERROR("============================================");
            ERROR("SC : TAKING CONTROL");
            ERROR("============================================");

            ERROR("STOPPING DRONE IMMEDIATELY");
            px4->StopAutopilot();
            usleep(2000000);
            ERROR("BRINGING DRONE BACK INTO SAFE REGION using BACKTRACKING");
            px4->StartAutopilot(act_pos.x > 0 ? act_pos.x - 1 : act_pos.x + 1, act_pos.y > 0 ? act_pos.y - 1 : act_pos.y + 1, -3);
            usleep(5000000);
            ERROR("RETURNING CONTROL to AC");
            ERROR("============================================");
            incontrol = true;
            pthread_mutex_unlock(&getlock);
        }
        else
        {

            //LOG("Drone is safely inside geo fence\n");
            //LOG("Position: ");
            //printf("X: %lf, Y: %lf, Z: %lf\n", act_pos.x, act_pos.y, -act_pos.z);
        }
    }

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
        WS_Coord(-1.17, -6.4, 5),
        WS_Coord(15, 16, 5),
        WS_Coord(-1.56, 5.12, 4),
        WS_Coord(8.7, -2.3, 6),
        WS_Coord(0.69, -2.8, 3),
        WS_Coord(-0.5, -6, 6),
        WS_Coord(-1, -6, 4),
        WS_Coord(-12.56, 15.12, 4)
    };

    OMPLPLanner* planner = new OMPLPLanner(argv[1], PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
    typedef void *(*start_routine) (void *);
    pthread_t tid;
    pthread_create(&tid, NULL, (start_routine)StopAutoPilot, (void*)px4);
    for(int i = 0; i< destinations.size()-1; i++)
    {

        vector<WS_Coord> path = planner->GeneratePlan(2, GazeboToPlanner(destinations.at(i)), GazeboToPlanner(destinations.at(i+1)));
        //convert the path into goto of length less than 10
        vector<WS_Coord> pathNew = path;//ConvertToSmallGotos(path);

        for (int count = 0; count < pathNew.size(); count++)
        {
            WS_Coord shifted = PlannerToGazebo(pathNew.at(count));
            //cout << shifted.ToString() << endl;
            px4->GoTo(shifted.y, shifted.x, -shifted.z, 1);
        }
        while(i == 3 && incontrol == false);
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Done with RANDOM PLAN %d\n", i);
    }

    px4logger->Stop();
    px4logger->ToCSV();

	return 0;
}
