#ifndef PX4LOGGER_H
#define PX4LOGGER_H

#include <vector>
#include <unistd.h>
#include <ctime>
#include <iostream>
#include <fstream>
#include <tuple>

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"

#include "RobotState.h"
#include "PX4Logger.h"

using namespace std;

class PX4Logger
{
private:

    double freq;    // log frequency (Hz)
    bool on;    // is logger on?
    clock_t t0;  // initial clock time

    char* filename;
    bool onLine;
    vector<bool> logMask;

    vector< tuple<double,RobotState*> > logs; // (time_stamp, state)

    static void* LoggerThread(void *args);

public:

    PX4Logger(double freq, char* filename, bool onLine, vector<bool> logMask);

    bool Start();
    bool Stop();

    bool IsOn(){ return this->on; }
    bool Toggle(){ this->on = !this->on; }
    void ResetClock(){ this->t0 = clock(); }

    double GetFreq(){ return this->freq; }

    void UpdateLogs();

    bool CSV(const char* filename, vector<bool> mask);
    void writeCSVLine(tuple<double,RobotState*> state);


};

#endif // !PX4LOGGER_H
