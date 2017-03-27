#ifndef STL_H
#define STL_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class STL
{
protected:
    //vector<string> vars;
    //vector<string> params;

public:
    //STL(vector<string> vars, vector<string> params);
    STL();
    virtual string ToString(){};
    string Dist(vector<string> wp, vector<double> w, double eps);


};

#endif // STL_H
