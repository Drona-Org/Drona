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

# Initializing the P Runtime Library
if (NOT (TARGET PRuntime))
    add_library(PRuntime SHARED IMPORTED)
    set_target_properties(PRuntime PROPERTIES IMPORTED_LOCATION ${P_LIB_LINK_PATH}/libPrt_shared.so)
    add_definitions( -DPRT_PLAT_LINUXUSER ) # currently ros only supports *nix/OSX
endif()

if(NOT EXISTS ${P_BUILD_PATH})
Message(FATAL_ERROR ">|> ${P_BUILD_PATH} not found. Build P")
else()
Message(STATUS ">|> Found P at ${P_BUILD_PATH}")
endif()


function (PBUILD depName solutionFile type)
    if(NOT EXISTS ${solutionFile})
        Message(SEND_ERROR ">|> solution ${solutionFile} not found")
    endif()
    if(${type} STREQUAL "C")
        Message(STATUS ">|> Generating C code for solution ${solutionFile}")
    elseif(${type} EQUAL "C#")
        Message(STATUS ">|> Generating C# code for solution ${solutionFile}")
    else()
        Message(SEND_ERROR ">|> incorrect parameter for generation ${type}")
    endif()

    set(workingDirectory get_filename_component(DIRECTORY ${solutionFile}))
    ADD_CUSTOM_TARGET(
            ${depName} ALL
            COMMENT "Building P ${solutionFile}..."
            COMMAND mono ${P_BUILD_PATH} /sln:${solutionFile} /generate:${type}
            #WORKING_DIRECTORY ${workingDirectory}
    )
endfunction(PBUILD)

