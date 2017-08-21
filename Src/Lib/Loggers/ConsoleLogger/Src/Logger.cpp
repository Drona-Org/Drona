#include "Logger.h"

Logger* ErrorLogger;
Logger* InfoLogger;
Logger* MavlinkLogger;
Logger* PLogger;

void InitializeLogger() {
    ErrorLogger =  new Logger();
    InfoLogger = new Logger();
    MavlinkLogger = new Logger();
    PLogger = new Logger();
}

// Constructor
void Logger::LogError(string msg)
{
    pthread_mutex_lock(&lock);
    fprintf(logconsole, "<ERROR> %s\n", msg.c_str());
    pthread_mutex_unlock(&lock);
    fflush(logconsole);
}
//print logging message
void Logger::LogMessage(string msg)
{

    pthread_mutex_lock(&lock);
    fprintf(logconsole, "<LOG> %s\n", msg.c_str());
    pthread_mutex_unlock(&lock);
    fflush(logconsole);
}

void Logger::InitLogger()
{
    char cmd[256];
    char *name = tempnam(NULL, NULL);
    mkfifo(name, 0666);

   sprintf(cmd, "gnome-terminal -x sh -c 'cat %s'", name);
       system(cmd);

    logconsole = fopen(name, "w");
}
