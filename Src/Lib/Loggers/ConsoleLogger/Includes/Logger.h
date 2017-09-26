#ifndef LOGGER_H
#define LOGGER_H

#include<pthread.h>
#include<stdio.h>
#include<string>
#include <iostream>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
using namespace std;



#define LOG(msg) InfoLogger->LogMessage(msg)
#define ERROR(msg) ErrorLogger->LogError(msg)
#define MAVLOG(msg) MavlinkLogger->LogMessage(msg);
#define PLOG(msg) PLogger->LogMessage(msg);
#define PERROR(msg) PLogger->LogError(msg);

class Logger
{

    pthread_mutex_t lock;
    FILE* logconsole;

public:
    Logger()
    {
        pthread_mutex_init(&lock, NULL);
        InitLogger();
    }

    //print error message
    void LogError(string msg);
    void LogMessage(string msg);
    void InitLogger();


};

extern Logger* ErrorLogger;
extern Logger* InfoLogger;
extern Logger* MavlinkLogger;
extern Logger* PLogger;
extern void InitializeLogger();
#endif
