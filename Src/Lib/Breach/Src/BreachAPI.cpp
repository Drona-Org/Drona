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
    engEvalString(this->matEng,"system.name = 'Drona'");
    engEvalString(this->matEng,"system.name = 'system.init_state = [0 0 0]'");
    this->initBreach = true;

    cout<<"BreachAPI::InitBreach Breach initialized"<<endl;
    return true;
}

