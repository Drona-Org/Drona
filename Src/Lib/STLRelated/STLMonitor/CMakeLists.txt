cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibBreach)

# Search .cpp in ./src
FILE(GLOB_RECURSE sources Src/*.cpp)
FILE(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)
INCLUDE_DIRECTORIES(/usr/local/MATLAB/R2016b/extern/include)

# Build exectuable
#add_executable(stlmonitor ${sources} ${includes})
add_library(stlmonitor STATIC ${sources} ${includes})

TARGET_LINK_LIBRARIES(stlmonitor eng mx mat)

SET_TARGET_PROPERTIES (
    stlmonitor
    PROPERTIES LINKER_LANGUAGE CXX
)

set (CMAKE_CXX_FLAGS "-Wl,-rpath,/usr/local/MATLAB/R2016b/bin/glnxa64/ -L/usr/local/MATLAB/R2016b/extern/lib")
