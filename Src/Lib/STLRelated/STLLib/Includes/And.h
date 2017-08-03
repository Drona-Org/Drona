#ifndef AND_H
#define AND_H

#include "STL.h"

using namespace std;

class And : public STL
{
private:
    STL *subFormula1;
    STL *subFormula2;

public:
    And(STL* subFormula1, STL* subFormula2);
    string ToString();

};

#endif // AND_H
