cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibBreach)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)


# Build exectuable
add_library(breach STATIC ${sources} ${includes})

TARGET_LINK_LIBRARIES(breach logger)
