#include "STL.h"
#include "Atom.h"
#include "And.h"
#include "Not.h"

int main(int argc, char const *argv[])
{

    STL *a1 = new Atom("x1[t] < 10");
    STL *a2 = new Atom("x2[t] > 50");
    STL *conj = new And(a1,a2);
    STL *f = new Not(conj);

    vector<string> vars = {"x1[t]","x2[t]","x3[t]"};
    vector<double> wd = {5,4,-5};

    cout<<f->Dist(vars,wd,0.5);

    return 0;

}
