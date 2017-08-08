cmake_minimum_required(VERSION 3.0)
project(dronaSrcTrustedSoftwareStack)


set(projectName trustedsoftwarestack)
PBUILD(dep_${projectName} ${CMAKE_CURRENT_SOURCE_DIR}/TrustedSoftwareStack.xml "c" ${CMAKE_CURRENT_SOURCE_DIR})














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

)

target_link_libraries(${projectName}
  pruntime
  pthread
  clogger
  px4driver
)








