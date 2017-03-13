cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibWorkspaceParser)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
INCLUDE_DIRECTORIES(Includes)

# Build exectuable
add_library(workspaceparser STATIC ${sources} ${includes})

