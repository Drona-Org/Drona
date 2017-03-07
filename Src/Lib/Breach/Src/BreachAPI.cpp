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
double BreachAPI::STLEval(char* spec, char* fileName){

    if( !this->matEng || !this->initBreach){
        cout<<"BreachAPI::STLEval Matlab engine off or Breach not initialized"<<endl;
        return 0;
    }

    char mat_cmd[100];

    // Read trace
    engEvalString(this->matEng,"");
    sprintf(mat_cmd,"trace_csv = csvread('%s');", fileName);
    engEvalString(this->matEng,mat_cmd);
    engEvalString(this->matEng,"trace = trace_csv(:,1:end-1)"); // Drop last useless column

    // Initialize system
    engEvalString(this->matEng,"BrTrace = BreachTraceSystem({'x','y','z'}, trace);");

    // Compute robustness
    sprintf(mat_cmd,"rob = BrTrace.GetRobustSat('%s')", spec);
    engEvalString(this->matEng,mat_cmd);

    // Get robustness
    mxArray *result;
    double *r;
    result = engGetVariable(this->matEng,"rob");
    r = mxGetPr(result);

    return r[0];
}
