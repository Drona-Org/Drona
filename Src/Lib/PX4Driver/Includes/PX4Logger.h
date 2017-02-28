#ifndef PX4LOGGER_H
#define PX4LOGGER_H

#include <vector>
#include <ctime>

#include "RobotState.h"

using namespace std;

class PX4Logger
{
private:

    vector< RobotState* > logs;
    vector< float > timeStamps;

    bool on;    // is logger on?
    clock_t t0;  // initial clock time

public:

    PX4Logger();
    bool IsOn(){ return this->on; }
    bool Toggle(){ this->on = !this->on; }

    void ResetClock(){ this->t0 = clock(); }

    void UpdateLogs(clock_t t);
    void Print();
    void Dump();

};

extern PX4Logger* PX4LOGGER;
#endif // !PX4LOGGER_H
