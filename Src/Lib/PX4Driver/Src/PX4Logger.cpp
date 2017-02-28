#include "PX4Logger.h"

PX4Logger::PX4Logger(){
    this->on = false;
}

void PX4Logger::UpdateLogs(clock_t t){
    this->logs.push_back(ROBOTSTATE->GetState());
    this->timeStamps.push_back( double(t-this->t0)/CLOCKS_PER_SEC);
}

void PX4Logger::Print(){

    for( int i=0; i<this->timeStamps.size(); i++ ){
        cout<<this->timeStamps[i]<<" ";
    }
}



