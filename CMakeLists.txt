cmake_minimum_required(VERSION 3.0)
project(drona)

#SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_VERBOSE_MAKEFILE true)

INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders/common)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Includes/MavlinkHeaders)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Communication/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/Logger/Includes)
INCLUDE_DIRECTORIES(${drona_SOURCE_DIR}/Src/Lib/PX4Driver/Includes)

subdirs(Samples/TestCommunicationLib)
subdirs(Samples/PSample)
subdirs(Src/Lib/Logger)
subdirs(Src/Lib/Communication)
subdirs(Src/Lib/PX4Driver)



###########################################################################
## P Compilation Related Helper Functions
###########################################################################

## Compile P source
set(P_COMPILER_PATH ${CMAKE_SOURCE_DIR}/Submodule/P/Bld/Drops/Debug/x86/Binaries/Pc.exe)
set(P_BUILT_LIB_PATH ${CMAKE_SOURCE_DIR}/Submodule/P/Bld/Drops/PrtUser)
set(P_LIB_INCLUDE_PATH ${P_BUILT_LIB_PATH}/include)
set(P_LIB_LINK_PATH ${P_BUILT_LIB_PATH}/lib)

function (p_compile pproject p_src)
        # Compiles a .p file and generate its c sources
        # use as p_compile(project project.p)
        # on return, the function sets
        #   project_GENERATED_SRCS, project_INCLUDE_DIRS, and project_LINK_LIBS
        # it's the user's responsiblity to create a specific cmake target and
        # call target_included_directories/link_libraries on the target

        if (NOT (TARGET Prt))
                add_library(Prt SHARED IMPORTED)
                set_target_properties(Prt PROPERTIES IMPORTED_LOCATION ${P_LIB_LINK_PATH}/libPrt_shared.so)
                add_definitions( -DPRT_PLAT_LINUXUSER ) # currently ros only supports *nix/OSX
        endif()

        set(p_compile_cmd mono ${P_COMPILER_PATH})
        get_filename_component(p_src_basename ${p_src} NAME_WE)
        set(generated_c_src ${p_src_basename}.c)
        set(output_dir ${CMAKE_CURRENT_SOURCE_DIR}/Generated)
        set(output_c_srcs ${output_dir}/${generated_c_src})
        ADD_CUSTOM_TARGET(compiler ALL
                WORKING_DIRECTORY ${output_dir}
                COMMAND ${CMAKE_COMMAND} -E make_directory ${output_dir}
                COMMENT "Compiling P ${p_src}..."
                COMMAND ${p_compile_cmd} /generate:C ../PSrc/${p_src}
                DEPENDS PSrc/${p_src}

        )

        set(${pproject}_GENERATED_SRCS ${${pproject}_GENERATED_SRCS} ${output_c_srcs} PARENT_SCOPE)
        set(${pproject}_INCLUDE_DIRS ${output_dir} ${P_LIB_INCLUDE_PATH} PARENT_SCOPE)
        set(${pproject}_LINK_LIBS Prt PARENT_SCOPE)

endfunction(p_compile)

function (p_link pproject formula_srcs)

    set(p_link_cmd mono ${P_COMPILER_PATH} /link)
    set(generated_c_src linker.c)
    set(output_dir ${CMAKE_CURRENT_SOURCE_DIR}/Generated)
    set(output_c_srcs ${output_dir}/${generated_c_src})

    list(REMOVE_AT ARGV 0)
    FOREACH(infileName ${ARGV})
        SET(allfiles ${allfiles} "${infileName}")
    ENDFOREACH(infileName)

    ADD_CUSTOM_TARGET(
            linker ALL
            COMMAND ${CMAKE_COMMAND} -E make_directory ${output_dir}
            COMMENT "Linking P ${p_src}..."
            COMMAND ${p_link_cmd} /outputDir:${output_dir} ${allfiles}
            WORKING_DIRECTORY ${output_dir}
    )
    set(${pproject}_GENERATED_SRCS ${${pproject}_GENERATED_SRCS} ${output_c_srcs} PARENT_SCOPE)
endfunction(p_link)
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
