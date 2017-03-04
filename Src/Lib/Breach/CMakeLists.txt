cmake_minimum_required(VERSION 3.0)
project(dronaSrcLibBreach C CXX)

# Search .cpp in ./src
file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

# Include path
#INCLUDE_DIRECTORIES(includes)


# Build exectuable
#add_library(breach STATIC ${sources} ${includes})

#TARGET_LINK_LIBRARIES(breach logger)

file(GLOB_RECURSE sources Src/*.cpp)
file(GLOB_RECURSE includes Includes/*.h)

INCLUDE_DIRECTORIES(includes)

add_library(breach SHARED ${sources} ${includes} ${CMAKE_SOURCE_DIR}/Matlabdef.def)

target_link_libraries(breach ${MATLAB_LIBRARIES})

# 32-bit or 64-bit mex
if(WIN32)
  if (CMAKE_CL_64)
      SET_TARGET_PROPERTIES(breach PROPERTIES SUFFIX .mexw64)
  else(CMAKE_CL_64)
      SET_TARGET_PROPERTIES(breach PROPERTIES SUFFIX .mexw32)
  endif(CMAKE_CL_64)
else(WIN32)
  if (CMAKE_SIZEOF_VOID_P MATCHES "8")
      SET_TARGET_PROPERTIES(breach PROPERTIES SUFFIX .mexa64 PREFIX "")
  else(CMAKE_SIZEOF_VOID_P MATCHES "8")
      SET_TARGET_PROPERTIES(breach PROPERTIES SUFFIX .mexglx PREFIX "")
  endif (CMAKE_SIZEOF_VOID_P MATCHES "8")
endif(WIN32)


