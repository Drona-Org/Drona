cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibDriversPX4Driver)
include(~/Documents/Drona/HelperScripts/CMakeLists.txt ~/Documents/Drona/Src/Lib/Drivers/PX4Driver)
include_directories(~/Documents/Drona/Src/Lib/Drivers/PX4Driver)


set(projectName px4driver)
PBUILD(dep_${projectName} /home/sumukh/Documents/Drona/Src/Lib/Drivers/PX4Driver/PMavlinkMessages.xml "c" ~/Documents/Drona/Src/Lib/Drivers/PX4Driver)














###################################
# Generic setup for each project
##################################

FILE(GLOB_RECURSE ${projectName}_psources PSrc/*)
FILE(GLOB_RECURSE ${projectName}_csources Src/*)
FILE(GLOB_RECURSE ${projectName}_gsources PGenerated/*.c)



add_library(${projectName} SHARED
  ${${projectName}_gsources}
  ${${projectName}_csources}
  ${${projectName}_psources}
)

set (${projectName}_INCLUDE
${CMAKE_CURRENT_SOURCE_DIR}/PGenerated/
${CMAKE_CURRENT_SOURCE_DIR}/Includes/
)

set_property(TARGET ${projectName} PROPERTY C_STANDARD 99)
set_property(TARGET ${projectName} PROPERTY LINKER_LANGUAGE CXX)
add_dependencies(${projectName} dep_${projectName})

#include generic files
target_include_directories(${projectName} PRIVATE
${${projectName}_INCLUDE})

#include specific files
target_include_directories(${projectName} PRIVATE
${dronaSrcTrustedSoftwareStack_SOURCE_DIR}/PGenerated
)

target_link_libraries(${projectName}
  pruntime
  pthread
  clogger
  communication
)







