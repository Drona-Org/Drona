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

    //while(true){
        double *robBouns = this->breach->STLEvalOnLine(STLspec,fileName);
        this->PrintRobustnessBounds(robBouns[1],robBouns[0]);

        //usleep(50000);
    //}

}

void Monitor::StartOnLineMonitor(const char* STLspec, const char* fileName){

    this->STLspec = STLspec;
    this->fileName = fileName;
    this->onLineMonitor = true;

    pthread_t onLineMonitorThread;
    vector<const char*> stlargs;
    stlargs.push_back(STLspec);
    stlargs.push_back(fileName);
    int result = pthread_create(&onLineMonitorThread, NULL, OnLineMonitorThread, this);
    if(result != 0)
    {
        //ERROR("Failed to create the online monitor thread");
        return;
    }

}

void Monitor::StopOnLineMonitor(){
    this->onLineMonitor = false;
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

// Run online monitor
void* Monitor::OnLineMonitorThread(void* args){

    //PX4Logger *px4logger = (PX4Logger*) args;
    //px4logger->ResetClock();

    Monitor *monitor = (Monitor*) args;

    cout<<"\n\n\nINMONITOR"<<monitor->STLspec;

    //double t_pause = (1/(px4logger->GetFreq()))*pow(10,6);

    while(monitor->onLineMonitor){
        usleep(50000); //log every 0.1 sec
        monitor->RobustnessOnLine(monitor->STLspec,monitor->fileName);
    }
    pthread_exit(NULL);
}


