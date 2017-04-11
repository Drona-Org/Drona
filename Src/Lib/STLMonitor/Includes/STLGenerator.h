#ifndef STLGENERATOR
#define STLGENERATOR

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <math.h>


using namespace std;

class STLGenerator
{
private:
    vector<string> vars;
    string ToString(double n);
    vector<string> ToString(vector<double> n);

public:
    STLGenerator(vector<string> vars);

    string Dist(vector<double> p);
    string DistFromLine(vector<double> p, vector<double> q);
    string Close(vector<double> p, double eps);

    vector<string> Diff(vector<string> a, vector<string> b);
    string SumOfSquares(vector<string> v);
    string Sqrt(string n);
};
#endif // !STLGenerator
