#ifndef STLGENERATOR
#define STLGENERATOR

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <math.h>

#include "WorkspaceParser.h"

using namespace std;

class STLGenerator
{
private:
    vector<string> vars;
    string ToString(double n);
    vector<string> ToString(WS_Coord n);

public:
    STLGenerator(vector<string> vars);

    string Dist(WS_Coord p);
    string DistFromLine(WS_Coord p, WS_Coord q);
    string Close(WS_Coord p, double eps);
    string Tube(WS_Coord p, WS_Coord q, double eps);

    string FollowTraj(vector<WS_Coord> traj, vector< double > epss );


    vector<string> Diff(vector<string> a, vector<string> b);
    string SumOfSquares(vector<string> v);
    string Sqrt(string n);

    double GetEpsilon(WS_Coord xInit, WS_Coord xGoal, vector<double> b);
    vector<double> GetEpsilon(vector<WS_Coord> traj, vector<double> b);
};
#endif // !STLGenerator
