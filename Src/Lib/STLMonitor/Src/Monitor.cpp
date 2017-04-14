#include "Monitor.h"

Monitor::Monitor(){

    // Start and initialize Breach
    this->breach = new BreachAPI();
    this->breach->StartMatlabEngine();
    this->breach->InitBreach("~/breach");

    // Robustness thresholds
    this->strong2weakSat = 1;
    this->sat2unsat = 0.0;
    this->weak2strongUnsat = -1;
}

// Online STL monitoring
double Monitor::Robustness(char* STLspec, char* fileName){
    return this->breach->STLEval(STLspec,fileName);
}


// Online STL monitoring
void Monitor::RobustnessOnLine(const char* STLspec, const char* fileName){

    while(true){
        //double *robBouns = this->breach->STLEvalOnLine(STLspec,fileName);
        //this->PrintRobustnessBounds(robBouns[1],robBouns[0]);

        //usleep(50000);
    }

}


void Monitor::PrintRobustnessBounds(double upBound, double lowBound){

    cout<<"Robustness: [";
    cout<<this->RobustnessColor(upBound);
    cout<<upBound<<SH_DEFAULT<<",";
    cout<<this->RobustnessColor(lowBound);
    cout<<lowBound<<SH_DEFAULT<<"]\n";
}

// Determine color of robustness values
char* Monitor::RobustnessColor(double rob){

    if(rob > this->strong2weakSat)      return SH_FG_GREEN;
    if(rob > this->sat2unsat)           return SH_FG_YELLOW;
    if(rob > this->weak2strongUnsat)    return SH_FG_RED;
                                        return SH_FG_LIGHT_RED;
}

//// Get an epsilon learn using linear regression
//double Monitor::GetEpsilon(vector<double> x, vector<double> b){

//    double eps = 0;
//    for(int i=0; i<x.size(); i++){
//        eps += x[i]*b[i+1];
//    }
//    eps += b[0];    // add constant coeff

//    return eps;
//}


