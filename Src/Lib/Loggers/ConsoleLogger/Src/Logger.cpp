#include "Logger.h"

//the following are UBUNTU/LINUX ONLY terminal color codes.
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

Logger* GlobalLogger = new Logger();

// Constructor
void Logger::LogError(const char* msg)
{
    pthread_mutex_lock(&lock);
    cout << RED << "<ERROR> " << msg << RESET <<endl;
    pthread_mutex_unlock(&lock);
}
//print logging message
void Logger::LogMessage(const char* msg)
{

    pthread_mutex_lock(&lock);
    cout << YELLOW << "<LOG> " << msg << RESET << endl;
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
