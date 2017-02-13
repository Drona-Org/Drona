cmake_minimum_required(VERSION 3.0)
project(dronaSrcSamplesPSample)


#list of all p sources with relative paths
set(pfiles ../PSrc/PingPong.p)

#list of all formula files to be linked (only files names)
set(formulafiles PingPong.4ml)

p_compile(PingPong ${pfiles})
p_link(PingPong ${formulafiles})
p_add_linker_dependencies(PingPong ${pfiles})

## Declare a C++ executable
FILE(GLOB_RECURSE psources PSrc/*)
FILE(GLOB_RECURSE csources Src/*)
add_executable(PingPong
  ${PingPong_GENERATED_SRCS}
  ${csources}
  ${psources}
)

add_dependencies(PingPong linker_PingPong)

set_property(TARGET PingPong PROPERTY C_STANDARD 99)
target_include_directories(PingPong PRIVATE
  ${PingPong_INCLUDE_DIRS}
)

target_link_libraries(PingPong
  ${PingPong_LINK_LIBS}
  pthread
)

SET_TARGET_PROPERTIES (
    PingPong
    PROPERTIES LINKER_LANGUAGE CXX
)
