#include "Logger.h"

Logger* GlobalLogger = new Logger();

// Constructor
void Logger::LogError(const char* msg)
{
    pthread_mutex_lock(&lock);
    fprintf(stderr,"<ERROR>");
    fprintf(stderr,"%s", msg);
    fprintf(stderr,"\n");
    pthread_mutex_unlock(&lock);
}
//print logging message
void Logger::LogMessage(const char* msg)
{
    pthread_mutex_lock(&lock);
    fprintf(stdout,"<LOG>");
    fprintf(stdout, "%s", msg);
    fprintf(stdout, "\n");
    pthread_mutex_unlock(&lock);
    fflush(stdout);
}

void Logger::DebugLog(const char* msg)
{
    pthread_mutex_lock(&lock);
    fprintf(stdout,"<DEBUG>");
    fprintf(stdout, "%s", msg);
    fprintf(stdout, "\n");
    pthread_mutex_unlock(&lock);
    fflush(stdout);
}
