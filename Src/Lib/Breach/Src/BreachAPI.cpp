#include "BreachAPI.h"

BreachAPI::BreachAPI(){

    this->engOn = false;
    this->initBreach = false;

}

// Start Matlab engine
bool BreachAPI::StartMatlabEngine(){

    if(this->engOn){
        cout<<"BreachAPI::StartMatlabEngine Matlab engine already on"<<endl;
        return false;
    }

    cout<<"BreachAPI::StartMatlabEngine Starting Matlab engine..."<<endl;
    if (!(this->matEng = engOpen(""))) {
        cout<<"BreachAPI::StartMatlabEngine Can't start MATLAB engine"<<endl;
        return false;
    }else{
        cout<<"BreachAPI::StartMatlabEngine MATLAB engine started"<<endl;
        this->engOn = true;
        return true;
    }
}

// Stop Matlab engine
bool BreachAPI::StopMatlabEngine(){

    if(!this->engOn){
        cout<<"BreachAPI::StopMatlabEngine Matlab engine already off"<<endl;
        return false;
    }

    engClose(this->matEng);
    this->engOn = false;

    cout<<"BreachAPI::StopMatlabEngine MATLAB engine stopped"<<endl;
    return true;
}

// Stop Matlab engine
bool BreachAPI::InitBreach(char* pathToBreach){

    if(this->initBreach){
        cout<<"BreachAPI::InitBreach Breach already initialized"<<endl;
        return false;
    }

    char buff[100];
    sprintf(buff,"addpath('%s')", pathToBreach);
    engEvalString(this->matEng,buff);
    engEvalString(this->matEng,"InitBreach");


    this->initBreach = true;

    cout<<"BreachAPI::InitBreach Breach initialized"<<endl;
    return true;
}

// Evaluate an STL formula
void BreachAPI::STLEval(){

    if( !this->matEng || !this->initBreach){
        cout<<"BreachAPI::STLEval Matlab engine off or Breach not initialized"<<endl;
    }

    // Initialize system
    engEvalString(this->matEng,"time = 0:.01:10; x = cos(time); y = sin(time);");
    engEvalString(this->matEng,"trace = [time' x' y'];");
    engEvalString(this->matEng,"BrTrace = BreachTraceSystem({'x','y'}, trace);");
    engEvalString(this->matEng,"rob = BrTrace.GetRobustSat('alw (x[t] < 1.5)')");

    mxArray *result;
    double *r;
    result = engGetVariable(this->matEng,"rob");
    r = mxGetPr(result);

    cout<<"Robuts: "<<r[0]<<"\n";



    // Compute robustness
    //engEvalString(this->matEng,"rob = STL_EvalClassicOnline(Sys,phi,P,traj)");


}






