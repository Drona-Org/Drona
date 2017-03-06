cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibBreach C CXX)


set(cfiles
    monitor.cpp
    BreachAPI.cpp
)
mex_compile(${CMAKE_CURRENT_SOURCE_DIR}/Src cfiles)
