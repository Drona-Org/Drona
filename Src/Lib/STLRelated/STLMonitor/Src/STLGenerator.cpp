#include "STLGenerator.h"


STLGenerator::STLGenerator(vector<string> vars){
    this->vars = vars;
}

// Distance of vars from p
string STLGenerator::Dist(WS_Coord p){
    return Sqrt( SumOfSquares( Diff(this->vars,ToString(p)) ) );
}

// Distance of vars from line passing throught p and q
string STLGenerator::DistFromLine(WS_Coord p, WS_Coord q){

    vector<string> subadd;
    subadd.push_back("abs("  + vars[0] + "-" + ToString(p.x) + "+ (" + ToString(pow((p.x - q.x),2)) + "*(" + ToString(p.x) + "-" + vars[0] + "))/" + ToString(sqrt(pow(abs(p.x - q.x),2) + pow(abs(p.y - q.y),2) + pow(abs(p.z - q.z),2))) + ")");
    subadd.push_back("abs("  + vars[1] + "-" + ToString(p.y) + "+ (" + ToString(pow((p.y - q.y),2)) + "*(" + ToString(p.y) + "-" + vars[1] + "))/" + ToString(sqrt(pow(abs(p.x - q.x),2) + pow(abs(p.y - q.y),2) + pow(abs(p.z - q.z),2))) + ")");
    subadd.push_back("abs("  + vars[2] + "-" + ToString(p.z) + "+ (" + ToString(pow((p.z - q.z),2)) + "*(" + ToString(p.z) + "-" + vars[2] + "))/" + ToString(sqrt(pow(abs(p.x - q.x),2) + pow(abs(p.y - q.y),2) + pow(abs(p.z - q.z),2))) + ")");

    return Sqrt(SumOfSquares(subadd));
}

// Epsilon close to p
string STLGenerator::Close(WS_Coord p, double eps){
    return this->Dist(p) + " < " + this->ToString(eps);
}


string STLGenerator::Tube(WS_Coord p, WS_Coord q, double eps){
    return DistFromLine(p,q) + " < " +this->ToString(eps);
}


// Follow a trajectory
string STLGenerator::FollowTraj(vector<WS_Coord> traj, vector< double > epss ){

    string reach_goal = Close(traj[1],epss[0]);
    string tube = Tube(traj[0],traj[1],epss[0]);

    // case base (two waypoints, one epsilon)
    if( ( traj.size() == 2 ) && ( epss.size() == 1 ) ){

        return "(" + tube + ") until (" + reach_goal + ")";

    }

    vector< WS_Coord > trajp(traj.begin() + 1, traj.end());
    vector< double > epssp(epss.begin() + 1, epss.end());

    string rec = "( " + reach_goal + ") and (" + FollowTraj(trajp,epssp) + ")";
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
vector<string> STLGenerator::ToString(WS_Coord n){
    vector<string> str;
    //for(int i=0; i<n.size(); i++){
    str.push_back(this->ToString(n.x));
    str.push_back(this->ToString(n.y));
    str.push_back(this->ToString(n.z));
    //}
    return str;
}


// Get an epsilon learn using linear regression
double STLGenerator::GetEpsilon(WS_Coord xInit, WS_Coord xGoal, vector<double> b){

    double vx = xGoal.x - xInit.x;
    double vy = xGoal.y - xInit.y;
    double vz = xGoal.z - xInit.z;

    double dist = sqrt(pow((vx),2) + pow((vy),2) + pow((vz),2));

    WS_Coord vdir(vx/dist,vy/dist,vz/dist);

    double eps = b[0] + b[1]*dist + b[2]*vdir.x + b[3]*vdir.y + b[4]*vdir.z;
    return eps;
}

// Get epsilons for trajectory learn using linear regression
vector<double> STLGenerator::GetEpsilon(vector<WS_Coord> traj, vector<double> b){

    vector<double> epss;
    for(int i=1; i<traj.size(); i++){
        epss.push_back(this->GetEpsilon(traj[i-1],traj[i],b));
    }
    return epss;
}

