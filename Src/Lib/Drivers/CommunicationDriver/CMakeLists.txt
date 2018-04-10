cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibDriversCommunicationDriver)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)



# Build exectuable
add_library(communication STATIC ${sources} ${includes})

# Include path
target_include_directories(communication PUBLIC
Includes
${dronaSrcLibLoggersConsoleLogger_SOURCE_DIR}/Includes
)

TARGET_LINK_LIBRARIES(communication pthread)
TARGET_LINK_LIBRARIES(communication clogger)
