#include "STLGenerator.h"


STLGenerator::STLGenerator(vector<string> vars){
    this->vars = vars;
}

// Distance of vars from p
string STLGenerator::Dist(vector<double> p){
    return Sqrt( SumOfSquares( Diff(this->vars,ToString(p)) ) );
}

// Distance of vars from line passing throught p and q
string STLGenerator::DistFromLine(vector<double> p, vector<double> q){

    vector<string> subadd;
    subadd.push_back("abs("  + vars[0] + "-" + ToString(p[0]) + "+ (" + ToString(pow((p[0] - q[0]),2)) + "*(" + ToString(p[0]) + "-" + vars[0] + "))/" + ToString(sqrt(pow(abs(p[0] - q[0]),2) + pow(abs(p[1] - q[1]),2) + pow(abs(p[2] - q[2]),2))) + ")");
    subadd.push_back("abs("  + vars[1] + "-" + ToString(p[1]) + "+ (" + ToString(pow((p[1] - q[1]),2)) + "*(" + ToString(p[1]) + "-" + vars[1] + "))/" + ToString(sqrt(pow(abs(p[0] - q[0]),2) + pow(abs(p[1] - q[1]),2) + pow(abs(p[2] - q[2]),2))) + ")");
    subadd.push_back("abs("  + vars[2] + "-" + ToString(p[2]) + "+ (" + ToString(pow((p[2] - q[2]),2)) + "*(" + ToString(p[2]) + "-" + vars[2] + "))/" + ToString(sqrt(pow(abs(p[0] - q[0]),2) + pow(abs(p[1] - q[1]),2) + pow(abs(p[2] - q[2]),2))) + ")");

    return Sqrt(SumOfSquares(subadd));
}

// Epsilon close to p
string STLGenerator::Close(vector<double> p, double eps){
    return this->Dist(p) + " < " + this->ToString(eps);
}


string STLGenerator::Tube(vector<double> p, vector<double> q, double eps){
    return DistFromLine(p,q) + " < " +this->ToString(eps);
}


// Follow a trajectory
string STLGenerator::FollowTraj(vector< vector<double> > wp, vector< double > epss ){

    string reach_goal = Close(wp[1],epss[0]);
    string tube = Tube(wp[0],wp[1],epss[0]);

    // case base (two waypoints, one epsilon)
    if( ( wp.size() == 2 ) && ( epss.size() == 1 ) ){

        return "(" + tube + ") until (" + reach_goal + ")";

    }

    vector< vector<double> > wpp(wp.begin() + 1, wp.end());
    vector< double > epssp(epss.begin() + 1, epss.end());

    string rec = "( " + reach_goal + ") and (" + FollowTraj(wpp,epssp) + ")";
    return "(" + tube + ") until ( " + rec + " )";
}


// a - b
vector<string> STLGenerator::Diff(vector<string> a, vector<string> b){
    vector<string> diff;
    for(int i=0; i<a.size(); i++){
        diff.push_back( a[i] + " - " + b[i] );
    }
    return diff;
}

// Squared sum of elements in v
string STLGenerator::SumOfSquares(vector<string> v){
    string phi = "( " + v[0] + " )^2";
    for(int i=1; i<this->vars.size(); i++){
        phi = phi + " + ( " + v[i] + " )^2";
    }
    return phi;
}

// Squared root
string STLGenerator::Sqrt(string n){
    return "( " + n + " )^(1/2)";
}


// Convert double to string
string STLGenerator::ToString(double n){
    ostringstream strs;
    strs << n;
    return strs.str();
}

// Convert doubles to strings
vector<string> STLGenerator::ToString(vector<double> n){
    vector<string> str;
    for(int i=0; i<n.size(); i++){
        str.push_back(this->ToString(n[i]));
    }
    return str;
}

