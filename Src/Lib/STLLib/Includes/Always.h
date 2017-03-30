#ifndef ALWAYS_H
#define ALWAYS_H

#include "STL.h"
#include <sstream>

using namespace std;

class Always : public STL
{
private:
    STL *subFormula;
    double t_start, t_end; // interval times

public:
    Always(STL* subFormula, double t_start, double t_end);
    string ToString();

};

#endif // ALWAYS_H
