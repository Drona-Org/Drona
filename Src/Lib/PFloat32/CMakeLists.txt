cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibPFloat32)



set(projectName pfloat32)

#list of all p sources with relative paths
set(pfiles ../PSrc/PFloat32.p)

#list of all formula files to be linked (only files names)
set(formulafiles PFloat32.4ml)

#######################################
## Generic compilation script for P code
########################################

p_compile(${projectName} pfiles)
p_link(${projectName} formulafiles)
p_add_linker_dependencies(${projectName} pfiles)

## Declare the output
FILE(GLOB_RECURSE ${projectName}_psources PSrc/*)
FILE(GLOB_RECURSE ${projectName}_csources Src/*)
FILE(GLOB_RECURSE ${projectName}_gsources Generated/*.c)
FILE(GLOB_RECURSE ${projectName}_includes Includes/*)
add_library(${projectName} SHARED
  ${${projectName}_gsources}
  ${${projectName}_csources}
  ${${projectName}_psources}
  ${${projectName}_includes}
)

add_dependencies(${projectName} linker_${projectName})

set_property(TARGET ${projectName} PROPERTY C_STANDARD 99)

target_include_directories(${projectName} PRIVATE
  ${${projectName}_INCLUDE_DIRS}
)

target_link_libraries(${projectName}
  ${${projectName}_LINK_LIBS}
)

SET_TARGET_PROPERTIES (
    ${projectName}
    PROPERTIES LINKER_LANGUAGE CXX
)
