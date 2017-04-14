#include <iostream>
#include <vector>

#include "STLGenerator.h"
#include "Monitor.h"
#include "WorkspaceParser.h"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> vars = {"x1[t]","x2[t]","x3[t]"};
    STLGenerator *gen = new STLGenerator(vars);

    WS_Coord p(30,4,-10);
    WS_Coord q(31,4,-15);
    WS_Coord r(7,8,9);
    vector< WS_Coord > traj = {p,q,r};

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

}
