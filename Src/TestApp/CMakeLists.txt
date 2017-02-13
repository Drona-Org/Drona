cmake_minimum_required(VERSION 3.0)
project(dronaSrcTestApp)

# Search .cpp in ./src
FILE(GLOB_RECURSE psources PSrc/*)
FILE(GLOB_RECURSE csources Src/*)
FILE(GLOB_RECURSE includes Includes/*)


# Build exectuable
add_library(testapp STATIC
    ${csources}
    ${psources}
    ${includes}
)


