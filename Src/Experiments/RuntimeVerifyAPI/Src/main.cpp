#include <iostream>
#include <vector>

#include "PX4API.h"

#include "STLGenerator.h"
#include "Monitor.h"
#include "WorkspaceParser.h"

#define SIMULATOR_PORT 14550

using namespace std;

int main(int argc, char const *argv[])
{

    WS_Coord p1(3,-2,-5);
    WS_Coord p2(3,-5,-5);
    WS_Coord p3(-3,-10,-7);
    WS_Coord p4(-3,-13,-8);
    WS_Coord p5(0,-15,-9);
    WS_Coord p6(3,-13,-8);
    WS_Coord p7(3,-10,-7);
    WS_Coord p8(-3,-5,-5);
    WS_Coord p9(-3,-2,-5);
    WS_Coord p10(0,0,-5);
    vector< WS_Coord > traj = {p1,p2,p3,p4,p5,p6,p7,p8,p9,p10};

    //vector<string> vars = {"x1[t]","x2[t]","x3[t]"};
    //STLGenerator *gen = new STLGenerator(vars);

    vector<double> mlCoeffs = {0.6180,0.1060,-0.0010,-0.0139,0.0806};

    //vector<double> epss = gen->GetEpsilon(traj,mlCoeffs);
    //string phi = gen->FollowTraj(traj,epss);

    //cout<<phi;


    //const char *cphi = phi.c_str();

    //char spec[10000];
    char fileName[500];

    //strcpy(fileName,"./traj_0.csv");

    //Monitor *monitor = new Monitor();

    // Take off
    PX4API *px4 = new PX4API(SIMULATOR_PORT);

    usleep(2500000);
    px4->Arm();
    usleep(2500000);
    px4->TakeoffGlobal(5);
    usleep(5000000);
    px4->StartAutopilot(0,0,-5);
    usleep(5000000);


    int i = 0;
    int numOfExperiments = 5;

    while(i<numOfExperiments){

        // Start loop
        char fileName[1000];
        sprintf(fileName, "traj_%d.csv", i);
        PX4Logger *px4logger = new PX4Logger(10, fileName, true, vector<bool>{true, true, true});
        px4logger->Start();

        //monitor->StartOnLineMonitor(cphi,fileName);


        px4->FollowTrajectory(traj,0.5);


        //monitor->StopOnLineMonitor();
        px4logger->Stop();
        px4logger->ToCSV();

        px4logger->logs.clear();
        px4logger->ResetClock();

        i = i + 1;
        usleep(5000000);
    }

    //cout<<rob[0]<<"\n";
    //cout<<rob[1]<<"\n";

    //

    //for(auto i : epss) cout<<i<<"\n";
    //for( auto i = epss.begin(); i != epss.end(); i++){
    //    cout<<i<<"\n";
    //}

    //while(true){}


}
