cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibPFloat32)

FILE(GLOB_RECURSE psources PSrc/*)
FILE(GLOB_RECURSE csources Src/*.c)
FILE(GLOB_RECURSE gsources Generated/*.c)

set(pfloat32_csource_dir Src)
p_compile(pfloat32 ../PSrc/PFloat32.p)
p_link(pfloat32 PFloat32.4ml)

## Declare a C++ executable
add_library(pfloat32 SHARED
  ${gsources}
  ${csources}
  ${psources}
)

add_dependencies(pfloat32 linker_pfloat32)

set_property(TARGET pfloat32 PROPERTY C_STANDARD 99)

target_include_directories(pfloat32 PRIVATE
  ${pfloat32_INCLUDE_DIRS}
)

target_link_libraries(pfloat32
  ${pfloat32_LINK_LIBS}
)

SET_TARGET_PROPERTIES (
    pfloat32
    PROPERTIES LINKER_LANGUAGE CXX
)
