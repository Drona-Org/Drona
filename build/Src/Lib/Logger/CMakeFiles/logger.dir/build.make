# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/drona/Workspace/DronaForPX4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/drona/Workspace/DronaForPX4/build

# Include any dependencies generated for this target.
include Src/Lib/Logger/CMakeFiles/logger.dir/depend.make

# Include the progress variables for this target.
include Src/Lib/Logger/CMakeFiles/logger.dir/progress.make

# Include the compile flags for this target's objects.
include Src/Lib/Logger/CMakeFiles/logger.dir/flags.make

Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o: Src/Lib/Logger/CMakeFiles/logger.dir/flags.make
Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o: ../Src/Lib/Logger/Src/Logger.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/drona/Workspace/DronaForPX4/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/logger.dir/Src/Logger.cpp.o -c /home/drona/Workspace/DronaForPX4/Src/Lib/Logger/Src/Logger.cpp

Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/logger.dir/Src/Logger.cpp.i"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/drona/Workspace/DronaForPX4/Src/Lib/Logger/Src/Logger.cpp > CMakeFiles/logger.dir/Src/Logger.cpp.i

Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/logger.dir/Src/Logger.cpp.s"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/drona/Workspace/DronaForPX4/Src/Lib/Logger/Src/Logger.cpp -o CMakeFiles/logger.dir/Src/Logger.cpp.s

Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.requires:
.PHONY : Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.requires

Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.provides: Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.requires
	$(MAKE) -f Src/Lib/Logger/CMakeFiles/logger.dir/build.make Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.provides.build
.PHONY : Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.provides

Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.provides.build: Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o

# Object files for target logger
logger_OBJECTS = \
"CMakeFiles/logger.dir/Src/Logger.cpp.o"

# External object files for target logger
logger_EXTERNAL_OBJECTS =

Src/Lib/Logger/liblogger.a: Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o
Src/Lib/Logger/liblogger.a: Src/Lib/Logger/CMakeFiles/logger.dir/build.make
Src/Lib/Logger/liblogger.a: Src/Lib/Logger/CMakeFiles/logger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library liblogger.a"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger && $(CMAKE_COMMAND) -P CMakeFiles/logger.dir/cmake_clean_target.cmake
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/logger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Src/Lib/Logger/CMakeFiles/logger.dir/build: Src/Lib/Logger/liblogger.a
.PHONY : Src/Lib/Logger/CMakeFiles/logger.dir/build

Src/Lib/Logger/CMakeFiles/logger.dir/requires: Src/Lib/Logger/CMakeFiles/logger.dir/Src/Logger.cpp.o.requires
.PHONY : Src/Lib/Logger/CMakeFiles/logger.dir/requires

Src/Lib/Logger/CMakeFiles/logger.dir/clean:
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger && $(CMAKE_COMMAND) -P CMakeFiles/logger.dir/cmake_clean.cmake
.PHONY : Src/Lib/Logger/CMakeFiles/logger.dir/clean

Src/Lib/Logger/CMakeFiles/logger.dir/depend:
	cd /home/drona/Workspace/DronaForPX4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/drona/Workspace/DronaForPX4 /home/drona/Workspace/DronaForPX4/Src/Lib/Logger /home/drona/Workspace/DronaForPX4/build /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger /home/drona/Workspace/DronaForPX4/build/Src/Lib/Logger/CMakeFiles/logger.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Src/Lib/Logger/CMakeFiles/logger.dir/depend

