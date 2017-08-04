cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibLoggersConsoleLogger)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)



# Build exectuable
add_library(clogger STATIC ${sources} ${includes})

# Include path
target_include_directories(clogger PRIVATE Includes)
