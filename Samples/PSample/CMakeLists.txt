cmake_minimum_required(VERSION 3.0)
project(dronaSrcSamplesPSample)

FILE(GLOB_RECURSE psources PSrc/*)
FILE(GLOB_RECURSE csources Src/*)

set(pingpong_psource_dir PSrc)
set(pingpong_csource_dir Src)

p_compile(PingPong PingPong.p)
p_link(PingPong PingPong.4ml)

## Declare a C++ executable
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
