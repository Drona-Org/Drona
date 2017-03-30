#include "Eventually.h"

Eventually::Eventually(STL *subFormula, double t_start, double t_end){
    this->subFormula = subFormula;
    this->t_start = t_start;
    this->t_end = t_end;
}

string Eventually::ToString(){

    ostringstream t_start_str, t_end_str;
    t_start_str << this->t_start;
    t_end_str << this->t_end;
    return "ev_[" + t_start_str.str() + "," + t_end_str.str() + "]" + "(" + this->subFormula->ToString() + ")";
}

