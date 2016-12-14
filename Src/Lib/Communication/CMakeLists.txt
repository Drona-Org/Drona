cmake_minimum_required(VERSION 3.0)
project(communication)

# Search .cpp in ./src
file(GLOB_RECURSE sources src/*.cpp)
file(GLOB_RECURSE includes includes/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)

# Build exectuable
add_executable(communication ${sources} ${includes})
