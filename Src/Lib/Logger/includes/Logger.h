#ifndef LOGGER_H
#define LOGGER_H

#include<pthread.h>
#include<stdio.h>
#include<string.h>

class Logger
{
    static pthread_mutex_t lock;

public:
    //print error message
    static void LogError(char* msg);
    static void LogMessage(char* msg);

};
#endif
