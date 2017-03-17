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
    sprintf(mat_cmd,"trace_csv = csvread('%s');", fileName);
    engEvalString(this->matEng,mat_cmd);
    engEvalString(this->matEng,"trace = trace_csv(:,1:end-1);"); // Drop last useless column

    // Initialize system
    engEvalString(this->matEng,"BrTrace = BreachTraceSystem({'x1','x2','x3'}, trace);");

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

// Evaluate an STL formula online
double* BreachAPI::STLEvalOnLine(char* spec, char* fileName){

    if( !this->matEng || !this->initBreach){
        cout<<"BreachAPI::STLEval Matlab engine off or Breach not initialized"<<endl;
        return 0;
    }

    char mat_cmd[256];

    // Initialize system
    engEvalString(this->matEng,"system.name = 'Brass';");
    engEvalString(this->matEng,"system.init_state = [0 0 0];");
    sprintf(mat_cmd,"options.phi = '%s';", spec);
    engEvalString(this->matEng,mat_cmd);
    engEvalString(this->matEng,"nb_signals = numel(system.init_state);");
    engEvalString(this->matEng,"Sys = CreateExternSystem(system.name, nb_signals, 0);");
    engEvalString(this->matEng,"P = CreateParamSet(Sys);");
    engEvalString(this->matEng,"phi = STL_Formula('phi', options.phi);");

    // Initialize trace
    engEvalString(this->matEng,"traj.param = zeros(1, nb_signals);");
    sprintf(mat_cmd,"trace_csv = csvread('%s');", fileName);
    engEvalString(this->matEng,mat_cmd);
    engEvalString(this->matEng,"traj.time = trace_csv(:,1)';");
    engEvalString(this->matEng,"traj.X = trace_csv(:,2:end-1)';");

    // Compute robustness bounds
     engEvalString(this->matEng,"rob_bounds = STL_EvalClassicOnline(Sys,phi,P,traj,0);");

     // Get robustness bouns
     mxArray *result;
     double *r;
     result = engGetVariable(this->matEng,"rob_bounds");
     r = mxGetPr(result);

     return r;
}


