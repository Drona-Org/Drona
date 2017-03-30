#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string>
#include <sstream>
#include <math.h>
#include <sstream>
#include <stdlib.h>

#include "STL.h"
#include "And.h"
#include "Always.h"
#include "Atom.h"
#include "Eventually.h"
#include "Not.h"

using namespace std;

class Utils
{
private:

public:
    Utils();

    string Norm(vector<string> v);
    double Norm(vector<double> v);
    vector<double> Div(vector<double> v, double n);
    vector<double> Diff(vector<double> v1, vector<double> v2);
    vector<string> Op(vector<string> v1, vector<string> v2, string op);

    string Dist(vector<string> v1, vector<string> v2);
    string DistFromLine(vector<string> w, vector<double> p1, vector<double> p2);

    string Close(vector<string> w, string eps);

    string ToString(double n);
    vector<string> ToString(vector<double> n);
    double ToDouble(string s);
    vector<double> ToDouble(vector<string> s);

    STL* Close(vector<string> v1, vector<string> v2, string eps);
    STL* Tube(vector<string> v, vector<double> p1, vector<double> p2, double t_start, double t_end, string eps);
    STL* Hover(vector<string> v1, vector<string> v2, double t_start, double t_end, string eps);
    STL* GoTo(vector<string> v, vector<string> v1, vector<string> v2, double t_start, double t_end, string eps);

};

#endif // UTILS_H
