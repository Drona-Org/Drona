cmake_minimum_required(VERSION 3.0)
project(CatFix)

# Search .cpp in ./src
file(GLOB_RECURSE sources src/*.cpp)
FILE(GLOB_RECURSE includes include/*.h)

# Include path
INCLUDE_DIRECTORIES(include)

# Build exectuable
add_executable(catfix ${sources} ${includes})
