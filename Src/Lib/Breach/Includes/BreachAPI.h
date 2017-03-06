#ifndef BREACHAPI
#define BREACHAPI

#include "engine.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


class BreachAPI
{
private:
    Engine *matEng;    // Matlab engine
    bool engOn;
    bool initBreach;

public:
    BreachAPI();

    bool StartMatlabEngine();
    bool StopMatlabEngine();

    bool InitBreach(char* pathToBreach);

    void STLEval();

};
#endif // !BreachAPI
