#ifndef ATOM_H
#define ATOM_H

#include "STL.h"

using namespace std;

class Atom : public STL
{
private:
    string predicate;

public:
    Atom(string predicate);    
    string ToString();

};

#endif // ATOM_H
