#include "Logger.h"

// Constructor
void Logger::LogError(char* msg)
{
    pthread_mutex_lock(&lock);
    printf("<ERROR>");
    printf(msg);
    printf("\n");
    pthread_mutex_unlock(&lock);
}
//print logging message
void Logger::LogMessage(char* msg)
{
    pthread_mutex_lock(&lock);
    printf("<LOG>");
    printf(msg);
    printf("\n");
    pthread_mutex_unlock(&lock);
}
