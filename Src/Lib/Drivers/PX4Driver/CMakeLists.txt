cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibDriversPX4Driver)


set(projectName px4driver)
PBUILD(dep_${projectName} ${PROJECT_SOURCE_DIR}/PMavlinkMessages.xml "C")














###################################
# Generic setup for each project
##################################

FILE(GLOB_RECURSE ${projectName}_psources PSrc/*)
FILE(GLOB_RECURSE ${projectName}_csources Src/*)
FILE(GLOB_RECURSE ${projectName}_gsources PGenerated/*.c)
FILE(GLOB_RECURSE ${projectName}_includes Includes/*)


add_library(${projectName} SHARED
  ${${projectName}_gsources}
  ${${projectName}_csources}
  ${${projectName}_psources}
  ${${projectName}_includes}
)

set_property(TARGET ${projectName} PROPERTY C_STANDARD 99)
set_property(TARGET ${projectName} PROPERTY LINKER_LANGUAGE CXX)
add_dependencies(${projectName} dep_${projectName})
target_include_directories(${projectName} PRIVATE ${${projectName}_INCLUDE_DIRS})
target_link_libraries(${projectName}
  PRuntime
  pthread
)







