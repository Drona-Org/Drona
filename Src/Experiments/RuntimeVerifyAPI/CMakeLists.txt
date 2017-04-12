project(RuntimeVerifyAPI)

# Search .cpp in ./src
FILE(GLOB_RECURSE sources Src/*.cpp)
FILE(GLOB_RECURSE includes Include/*.h ${drona_SOURCE_DIR}/Src/Lib/Communication/*.h)

# Include path
INCLUDE_DIRECTORIES(includes)
INCLUDE_DIRECTORIES(${P_LIB_INCLUDE_PATH})
INCLUDE_DIRECTORIES(/usr/local/MATLAB/R2016b/extern/include)

# Build exectuable
add_executable(runtimeverifyapi Src/main.cpp ${includes})

add_definitions( -DPRT_PLAT_LINUXUSER )
# Target Communication Libraries
TARGET_LINK_LIBRARIES(runtimeverifyapi px4driver workspaceparser stlmonitor eng mx mat)

SET_TARGET_PROPERTIES (
    stlmonitor
    PROPERTIES LINKER_LANGUAGE CXX
)

set (CMAKE_CXX_FLAGS "-std=c++11 -Wl,-rpath,/usr/local/MATLAB/R2016b/bin/glnxa64/ -L/usr/local/MATLAB/R2016b/extern/lib")



