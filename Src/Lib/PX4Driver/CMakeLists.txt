cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibPX4Driver)

# Search .cpp in ./src
FILE(GLOB_RECURSE psources PSrc/*)
FILE(GLOB_RECURSE csources Src/*)
FILE(GLOB_RECURSE includes Includes/*)

set(floatincludes ${drona_SOURCE_DIR}/Src/Lib/PFloat32/Src/)

p_compile(px4driver ../../PFloat32/PSrc/PFloat32.p)
p_compile(px4driver ../PSrc/MavlinkEnums.p)
p_compile(px4driver ../PSrc/MavlinkMessageTypes.p)
p_link(px4driver MavlinkEnums.4ml MavlinkMessageTypes.4ml PFloat32.4ml)


# Build exectuable
add_library(px4driver STATIC
    ${px4driver_GENERATED_SRCS}
    ${csources}
    ${psources}
    ${includes}
)


add_dependencies(px4driver linker_px4driver)


target_include_directories(px4driver PRIVATE
  ${px4driver_INCLUDE_DIRS}
  Includes
  ${floatincludes}
)

target_link_libraries(px4driver
  ${px4driver_LINK_LIBS}
  pthread
  logger
  communication
  pfloat32
)

set_property(TARGET px4driver PROPERTY C_STANDARD 99)

set_target_properties (px4driver PROPERTIES LINKER_LANGUAGE CXX)

