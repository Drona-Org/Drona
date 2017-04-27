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
    vector<string> vars = {"x1[t]","x2[t]","x3[t]"};
    STLGenerator *gen = new STLGenerator(vars);

    WS_Coord p1(5,5,-5);
    WS_Coord p2(5,-5,-5);
    WS_Coord p3(0,0,-5);
    vector< WS_Coord > traj = {p1,p2,p3};

    vector<double> mlCoeffs = {0.1052,0.1103,-0.0145,-0.0053,0.1142};

    vector<double> epss = gen->GetEpsilon(traj,mlCoeffs);
    string phi = gen->FollowTraj(traj,epss);

    cout<<phi;


    //const char *cphi = phi.c_str();

    //char spec[10000];
   // char fileName[500];

    //strcpy(fileName,"/home/tommaso/DronaForPX4/Src/Experiments/VerifyAPI/Logs/traj_0.csv");

    //Monitor *monitor = new Monitor();
    //monitor->RobustnessOnLine(spec,fileName);

    //double *rob = monitor->breach->STLEvalOnLine(spec,fileName);

    //cout<<rob[0]<<"\n";
    //cout<<rob[1]<<"\n";

    //

    //for(auto i : epss) cout<<i<<"\n";
    //for( auto i = epss.begin(); i != epss.end(); i++){
    //    cout<<i<<"\n";
    //}


    // Take off
    PX4API *px4 = new PX4API(SIMULATOR_PORT);

    usleep(2500000);
    px4->Arm();
    usleep(2500000);
    px4->TakeoffGlobal(5);
    usleep(5000000);
    px4->StartAutopilot(0,0,-5);
    usleep(5000000);


    // Start loop
    char fileName[1000];
    sprintf(fileName, "tom.csv");
    PX4Logger *px4logger = new PX4Logger(10, fileName, false, vector<bool>{true, true, true});
    px4logger->Start();
    px4->FollowTrajectory(traj,1);

    px4logger->Stop();
    px4logger->ToCSV();


}
