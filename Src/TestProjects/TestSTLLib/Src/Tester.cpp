#include "STL.h"
#include "Atom.h"
#include "And.h"
#include "Not.h"
#include "Always.h"

#include "Utils.h"

int main(int argc, char const *argv[])
{

    STL *a1 = new Atom("x1[t] < 10");
    STL *a2 = new Atom("x2[t] > 50");
    STL *conj = new And(a1,a2);
    STL *f = new Always(a1,0,10);

    vector<string> vars = {"x1[t]","x2[t]","x3[t]"};
    vector<string> wd = {"0","8","0"};
    vector<string> w1 = {"0","5","0"};
    vector<string> w2 = {"10","5","0"};

    Utils *utils = new Utils();


    cout<<utils->GoTo(vars,w1,w2,0,10,"1")->ToString();

    return 0;

}
