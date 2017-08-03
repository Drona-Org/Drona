#include "And.h"

And::And(STL* subFormula1, STL* subFormula2){
    this->subFormula1 = subFormula1;
    this->subFormula2 = subFormula2;
}

string And::ToString(){
    return "( " + this->subFormula1->ToString() + " ) and ( " + this->subFormula2->ToString() + " )";
}

