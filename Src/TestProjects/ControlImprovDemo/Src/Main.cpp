#include <iostream>
#include <fstream>
#include "PlanGenerator.h"
#include "PX4Driver.h"
#include "WorkspaceParser.h"
using namespace std;

#define MAX_ROBOTS 5

WS_Coord PlannerToReal(WS_Coord coord) {
    return WS_Coord(coord.x, coord.y - 2, 2);
}

WorkspaceInfo* WSInfo;
const char* configFile;
OMPLPLanner* planner;
int controlSeq[100] = {1,5,4,0,2,3,0,5,0,4,0,1,0,4,3,0,2,3,0,
                       4,2,0,1,0,3,5,0,
                       4,0,5,2,0,1,3,0,
                       4,0,5,0,1,2,0,3,0,
                       2,1,3,0,5,4,0,
                       2,0,5,0,4,0,3,0,1,0,
                       4,0,2,0,5,0,1,3,0,3,2,0,
                       4,5,3,0,1,2,0,
                       4,5,2,0,1,5,2,0,3,0,1,0,-1};

WS_Coord mapping[] = {
    WS_Coord(0.5, 2.5, 2),
    WS_Coord(1.5, 3.5, 2),
    WS_Coord(2.5, 2.5, 2),
    WS_Coord(2.5, 0.5, 2),
    WS_Coord(4.5, 2.5, 2),
    WS_Coord(4.5, 0.5, 2),
};

static void RunRobot(void* robotid)
{
    char log[1000];
    int rid = *((int*) robotid);
    WS_RobotInfo robotInfo= WSInfo->robots.at(rid);
    Logger* logger = new Logger();
    logger->InitLogger();
    sprintf(log, "Robot %d starting at location %s", rid, robotInfo.startingLocation.ToString().c_str());
    logger->LogMessage(log);

     ofstream myfile;
     myfile.open ("traj.txt");



    int i = 0;
    WS_Coord currentPosition = robotInfo.startingLocation;
    while(controlSeq[i] != -1)
    {
        vector<WS_Coord> path = planner->GeneratePlan(2, currentPosition, mapping[controlSeq[i]]);

        for (int count = 1; count < path.size(); count++)
        {
            WS_Coord shifted = PlannerToReal(path.at(count));
            logger->LogMessage(shifted.ToString());
            myfile << shifted.x << "," << shifted.y << "," << shifted.z << endl;
        }
        currentPosition = mapping[controlSeq[i]];
        i++;
    }
    logger->LogError("Done");
    myfile.close();
}

int main(int argc, char const *argv[])
{
    typedef void *(*start_routine) (void *);
    const char* configFile = argv[1];
    WSInfo = ParseWorkspaceConfig(configFile);
    planner = new OMPLPLanner(configFile, PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
    pthread_t tid[MAX_ROBOTS];
    for(int i = 0; i < WSInfo->robots.size(); i++)
    {
        pthread_create(&tid[i], NULL, (start_routine)RunRobot, (void*)&i);
    }
    while(true) {}
	return 0;
}
