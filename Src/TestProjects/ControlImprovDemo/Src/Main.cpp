#include <iostream>
#include "PlanGenerator.h"
#include "PX4Driver.h"
#include "WorkspaceParser.h"
using namespace std;

#define MAX_ROBOTS 5

WorkspaceInfo* WSInfo;
const char* configFile;

static void RunRobot(void* robotid)
{
    char log[1000];
    int rid = *((int*) robotid);
    WS_RobotInfo robotInfo= WSInfo->robots.at(rid);
    Logger* logger = new Logger();
    logger->InitLogger();
    sprintf(log, "Robot %d starting at location %s", rid, robotInfo.startingLocation.ToString().c_str());
    logger->LogMessage(log);

    OMPLPLanner* planner = new OMPLPLanner(configFile, PLANNER_RRTSTAR, OBJECTIVE_PATHLENGTH);
    //for(int i = 0; i< destinations.size()-1; i++)
    {
        vector<WS_Coord> path = planner->GeneratePlan(3, robotInfo.startingLocation, WS_Coord(25, 3, 25));

        for (int count = 0; count < path.size(); count++)
        {
            WS_Coord shifted = path.at(count);
            logger->LogMessage(shifted.ToString());
            //Invoke SMC
        }
    }
    logger->LogError("Done");
}

int main(int argc, char const *argv[])
{
    typedef void *(*start_routine) (void *);
    const char* configFile = argv[1];
    WSInfo = ParseWorkspaceConfig(configFile);

    pthread_t tid[MAX_ROBOTS];
    for(int i = 0; i < WSInfo->robots.size(); i++)
    {
        pthread_create(&tid[i], NULL, (start_routine)RunRobot, (void*)&i);
    }
    while(true) {}
	return 0;
}
