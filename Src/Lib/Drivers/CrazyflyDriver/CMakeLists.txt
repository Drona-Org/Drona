#cmake_minimum_required(VERSION 3.0)
#project(dronaSrcLibCrazyflie)

# Search .cpp in ./src
#file(GLOB_RECURSE sources Src/*.cpp)
#file(GLOB_RECURSE includes Includes/*.h)

# Include path
#INCLUDE_DIRECTORIES(includes)

# Build exectuable
#add_library(crazyflie STATIC ${sources} ${includes})

#TARGET_LINK_LIBRARIES(crazyflie logger)

cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibCrazyflie)

file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

include_directories(includes)
link_directories("/usr/lib/x86_64-linux-gnu/")

find_library(USB_LIB usb-1.0)
if(${USB_LIB} STREQUAL "USB_LIB-NOTFOUND")
  message(STATUS "The USB libs appear to not be installed.")
  message(FATAL_ERROR "On Ubuntu, do: sudo apt-get install libusb-1.0-0 libusb-1.0-0-dev")
endif()

add_library(crazyflie STATIC ${sources} ${includes})
target_link_libraries(crazyflie ${USB_LIB})

# ARM needs librt linked in
if(${CMAKE_SYSTEM_PROCESSOR} STREQUAL "arm")
  target_link_libraries(crazyflie rt)
endif()
