cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibPX4Driver)

# Search .cpp in ./src
FILE(GLOB_RECURSE psources PSrc/*)
FILE(GLOB_RECURSE csources Src/*)
FILE(GLOB_RECURSE includes Includes/*)

#Compile POrb
p_compile(px4driver ../PSrc/POrb/POrb.p)

# Build exectuable
add_library(dronasoftstack STATIC
    ${dronasoftstack_GENERATED_SRCS}
    ${csources}
    ${psources}
    ${includes}
)


#add_dependencies(dronasoftstack linker_dronasoftstack)

set_property(TARGET dronasoftstack PROPERTY C_STANDARD 99)

set_target_properties (dronasoftstack PROPERTIES LINKER_LANGUAGE CXX)

