#include "STL.h"
#include "Atom.h"
#include "And.h"
#include "Not.h"

#include "Utils.h"

int main(int argc, char const *argv[])
{

    STL *a1 = new Atom("x1[t] < 10");
    STL *a2 = new Atom("x2[t] > 50");
    STL *conj = new And(a1,a2);
    STL *f = new Not(conj);

    vector<string> vars = {"x1[t]","x2[t]","x3[t]"};
    vector<string> wd = {"0","8","0"};
    vector<double> w1 = {0,2,2};
    vector<double> w2 = {10,2,2};

    Utils *utils = new Utils();

    cout<<utils->Close(vars,wd,"5");

    return 0;

}
