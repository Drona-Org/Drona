SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_VERBOSE_MAKEFILE true)

###########################################################################
## P Compilation Related Helper Functions
###########################################################################

## Compile P source
set(P_COMPILER_PATH ${CMAKE_SOURCE_DIR}/Submodule/P/Bld/Drops/Release/x64/Binaries/Pc.exe)
set(P_BUILD_PATH ${CMAKE_SOURCE_DIR}/Submodule/P/Bld/Drops/Release/x64/Binaries/PBuild.exe)
set(P_BUILT_LIB_PATH ${CMAKE_SOURCE_DIR}/Submodule/P/Bld/Drops/PrtUser)
set(P_LIB_INCLUDE_PATH ${P_BUILT_LIB_PATH}/include)
set(P_LIB_LINK_PATH ${P_BUILT_LIB_PATH}/lib)

## Initializing the P Runtime Library
if (NOT (TARGET pruntime))
    add_library(pruntime SHARED IMPORTED)
    set_target_properties(pruntime PROPERTIES IMPORTED_LOCATION ${P_LIB_LINK_PATH}/libPrt_shared.so)
    add_definitions( -DPRT_PLAT_LINUXUSER )
endif()

if(NOT EXISTS ${P_BUILD_PATH})
Message(FATAL_ERROR ">|> ${P_BUILD_PATH} not found. Build P")
else()
Message(STATUS ">|> Found P at ${P_BUILD_PATH}")
endif()


function (PBUILD depName solutionFile type workingdirectory)
    if(NOT EXISTS ${solutionFile})
        Message(SEND_ERROR ">|> solution ${solutionFile} not found")
    endif()
    if(${type} STREQUAL "c")
        Message(STATUS ">|> Will generate C code for solution ${solutionFile}")
    elseif(${type} EQUAL "c#")
        Message(STATUS ">|> Will generate C# code for solution ${solutionFile}")
    else()
        Message(SEND_ERROR ">|> incorrect parameter for generation ${type}")
    endif()
    ADD_CUSTOM_TARGET(
            ${depName} ALL
            COMMENT "Building P ${solutionFile}..."
            COMMAND mono ${P_BUILD_PATH} /sln:${solutionFile} /generate:${type}
            WORKING_DIRECTORY ${workingdirectory}
    )
endfunction(PBUILD)

##########################################################################
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
