#ifndef LOGGER_H
#define LOGGER_H

#include<pthread.h>
#include<stdio.h>
#include<string>
#include <iostream>
using namespace std;



#define LOG(msg) GlobalLogger->LogMessage(msg)
#define ERROR(msg) GlobalLogger->LogError(msg)
#define DEBUG_LOG(msg) GlobalLogger->DebugLog(msg)

class Logger
{

    pthread_mutex_t lock;
public:
    Logger()
    {
        pthread_mutex_init(&lock, NULL);
    }
    //print error message
    void LogError(const char* msg);
    void LogMessage(const char* msg);
    void DebugLog(const char* msg);

};
extern Logger* GlobalLogger;

#endif
