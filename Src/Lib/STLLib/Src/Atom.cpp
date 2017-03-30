#include "Atom.h"

Atom::Atom(string predicate){
    this->predicate = predicate;

}

string Atom::ToString(){
    return this->predicate;
}

