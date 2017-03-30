#ifndef EVENTUALLY_H
#define EVENTUALLY_H

#include "STL.h"
#include <sstream>

using namespace std;

class Eventually : public STL
{
private:
    STL *subFormula;
    double t_start, t_end; // interval times

public:
    Eventually(STL* subFormula, double t_start, double t_end);
    string ToString();

};

#endif // EVENTUALLY_H
