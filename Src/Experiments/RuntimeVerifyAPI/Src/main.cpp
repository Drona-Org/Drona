#include <iostream>
#include <vector>

#include "STLGenerator.h"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> vars = {"x[t]","y[t]","z[t]"};
    STLGenerator *gen = new STLGenerator(vars);

    vector<double> p = {30,4,-10};
    vector<double> q = {31,4,-15};
    vector<double> r = {7,8,9};

    vector< vector<double> > traj = {p,q,r};
    vector<double> epss = {0.5,0.5};

    cout<<gen->FollowTraj(traj,epss);
}

