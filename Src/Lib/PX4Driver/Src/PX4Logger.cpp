#include "PX4Logger.h"

PX4Logger::PX4Logger(double freq, char* filename, bool onLine, vector<bool> logMask){
    this->freq = freq;
    this->on = false;
    this->filename = filename;
    this->onLine = onLine;
    this->logMask = logMask;
}

// Update log records
void PX4Logger::UpdateLogs(){

    double t_stamp = (double(clock() - this->t0)/CLOCKS_PER_SEC)*100;
    tuple<double,RobotState*> state(t_stamp,ROBOTSTATE->Clone());

    this->logs.push_back(state);

    // Write on line logs
    if(this->onLine){ this->writeCSVLine(state); };
}


bool PX4Logger::Start(){

    if(this->on){
        //LOG("PX4API::StartLogger logger already on");
        return false;
    }

    this->on = true;

    pthread_t loggerThread;
    int result = pthread_create(&loggerThread, NULL, LoggerThread, this);
    if(result != 0)
    {
        //ERROR("Failed to create the logger thread");
        return false;
    }

    //LOG("PX4API::StartLogger Logger on");
    return true;
}

bool PX4Logger::Stop(){

    if(!this->on){
        //LOG("PX4API::StopLogger logger already off");
        return false;
    }

    this->on = false;
    //LOG("PX4API::StopLogger Logger off");
    return true;
}

// Run logger
void* PX4Logger::LoggerThread(void* args){

    PX4Logger *px4logger = (PX4Logger*) args;
    px4logger->ResetClock();

    double t_pause = (1/(px4logger->GetFreq()))*pow(10,6);

    while(px4logger->IsOn()){
        usleep(t_pause); //log every 0.1 sec
        px4logger->UpdateLogs();
    }
    pthread_exit(NULL);
}


// Pring logs in CSV file
// mask tells what to print (x,y,z)
bool PX4Logger::CSV(const char* filename,  vector<bool> mask){

    if(this->IsOn()){
        //LOG("PX4Logger::WriteCSV Can't write CSV (logger is still running)");
        return false;
    }

    ofstream myfile;
    myfile.open (filename);

    for( std::vector< tuple<double,RobotState*> >::iterator it = this->logs.begin() ; it != this->logs.end(); ++it ){

        tuple<double,RobotState*> state = (*it);

        double time_stamp = get<0>(state);
        RobotState* pose = get<1>(state);
        //dump time
        myfile<<time_stamp<<",";

        // dump x
        if( mask[0] ){ myfile<<pose->GetLocalPosition().x <<","; }
        // dump y
        if( mask[1] ){ myfile<<pose->GetLocalPosition().y <<","; }
        // dump z
        if( mask[2] ){ myfile<<pose->GetLocalPosition().z <<","; }

        myfile<<"\n";
    }
    myfile.close();

    return true;
}

// Print CSV line
void PX4Logger::writeCSVLine(tuple<double,RobotState*> state){

    ofstream myfile;
    myfile.open (this->filename,ios_base::app);

    double time_stamp = get<0>(state);
    RobotState* pose = get<1>(state);
    //dump time

    myfile<<time_stamp<<",";

    // dump x
    if( this->logMask[0] ){ myfile<<pose->GetLocalPosition().x <<","; }
    // dump y
    if( this->logMask[1] ){ myfile<<pose->GetLocalPosition().y <<","; }
    // dump z
    if( this->logMask[2] ){ myfile<<pose->GetLocalPosition().z <<","; }

    myfile<<"\n";
    myfile.close();
}



