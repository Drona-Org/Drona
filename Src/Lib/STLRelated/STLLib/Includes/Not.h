#ifndef NOT_H
#define NOT_H

#include "STL.h"

class Not : public STL
{
private:
    STL *subFormula;

public:
    Not(STL* subFormula);
    string ToString();

};

#endif // NOT_H
