#include "STL.h"

STL::STL(){

}

// Generate the Euclidean distance formula dist(x,y) < eps
string STL::Dist(vector<string> wp, vector<double> w, double eps){

    string sqrSum;
    for( int i=0; i<wp.size() - 1; i++ ){

        string sqrDiff;

        // convert double to string
        ostringstream strs;
        strs << w[i];
        string str = strs.str();

        sqrDiff = "( " + wp[i] + " - " + str + " )^ 2 + ";
        sqrSum += sqrDiff;
    }

    // add last element squared term
    // convert double to string
    ostringstream strs;
    strs << w[w.size()-1];
    string str = strs.str();

    string sqrDiff = "( " + wp[wp.size()-1] + " - " + str + ")^ 2";
    sqrSum += sqrDiff;

    // add epsilon-distance
    ostringstream streps;
    streps << eps;
    return "sqrt( " + sqrSum + " ) < " + streps.str();

}
