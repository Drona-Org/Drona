#include "Not.h"

Not::Not(STL* subFormula){
    this->subFormula = subFormula;

}

string Not::ToString(){
    return "not ( " + this->subFormula->ToString() + " )";
}

