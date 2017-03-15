#ifndef MONITOR
#define MONITOR

#include "BreachAPI.h"

#include <iostream>
#include <unistd.h>
#include <ctime>

//// Foreground Colours ////
#define SH_FG_GREEN          "\033[0;32m"
#define SH_FG_RED            "\033[0;31m"
#define SH_FG_YELLOW         "\033[0;33m"
#define SH_FG_LIGHT_RED      "\033[1;31m"
#define SH_DEFAULT           "\033[0m"


using namespace std;

class Monitor
{
private:
    BreachAPI *breach;
    double strong2weakSat, sat2unsat, weak2strongUnsat;  // Robustness thresholds

    char* RobustnessColor(double rob);
    void PrintRobustnessBounds(double upBound, double lowBound);

public:
    Monitor();
    //void Robustness(char* STLspec, char* fileName);
    void RobustnessOnLine(char* STLspec, char* fileName);

};
#endif // !Monitor
