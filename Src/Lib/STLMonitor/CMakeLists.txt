cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibBreach)

# This is to show files in Qtcreator
FILE(GLOB_RECURSE src "Src/*.cpp")
FILE(GLOB_RECURSE includes "Includes/*.h")


add_custom_target(headers SOURCES ${includes})
add_custom_target(sources SOURCES ${src})


set(cfiles
    OnlineMonitor.cpp
    BreachAPI.cpp
    Monitor.cpp
)

set(inc_dir
  ${CMAKE_CURRENT_SOURCE_DIR}/Includes
)

mex_compile(${CMAKE_CURRENT_SOURCE_DIR}/Src cfiles ${inc_dir})

