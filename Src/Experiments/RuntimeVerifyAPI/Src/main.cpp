#include <iostream>
#include <vector>

#include "STLGenerator.h"
#include "Monitor.h"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> vars = {"x1[t]","x2[t]","x3[t]"};
    STLGenerator *gen = new STLGenerator(vars);

    vector<double> p = {30,4,-10};
    vector<double> q = {31,4,-15};
    vector<double> r = {7,8,9};

    vector< vector<double> > traj = {p,q,r};
    vector<double> epss = {0.5,0.5};

    string phi = gen->FollowTraj(traj,epss);
    const char *cphi = phi.c_str();

    char spec[10000];
    char fileName[500];

    strcpy(fileName,"/home/tommaso/DronaForPX4/Src/Experiments/VerifyAPI/Logs/traj_0.csv");

    Monitor *monitor = new Monitor();
    //monitor->RobustnessOnLine(spec,fileName);

    double *rob = monitor->breach->STLEvalOnLine(spec,fileName);

    cout<<rob[0]<<"\n";
    cout<<rob[1]<<"\n";


}

