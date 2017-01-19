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
include Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/depend.make

# Include the progress variables for this target.
include Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/progress.make

# Include the compile flags for this target's objects.
include Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/flags.make

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o: Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/flags.make
Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o: ../Src/Lib/PX4Driver/Src/PX4Communicator.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/drona/Workspace/DronaForPX4/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o -c /home/drona/Workspace/DronaForPX4/Src/Lib/PX4Driver/Src/PX4Communicator.cpp

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.i"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/drona/Workspace/DronaForPX4/Src/Lib/PX4Driver/Src/PX4Communicator.cpp > CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.i

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.s"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/drona/Workspace/DronaForPX4/Src/Lib/PX4Driver/Src/PX4Communicator.cpp -o CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.s

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.requires:
.PHONY : Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.requires

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.provides: Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.requires
	$(MAKE) -f Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/build.make Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.provides.build
.PHONY : Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.provides

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.provides.build: Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o

# Object files for target px4driver
px4driver_OBJECTS = \
"CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o"

# External object files for target px4driver
px4driver_EXTERNAL_OBJECTS =

Src/Lib/PX4Driver/libpx4driver.a: Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o
Src/Lib/PX4Driver/libpx4driver.a: Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/build.make
Src/Lib/PX4Driver/libpx4driver.a: Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libpx4driver.a"
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver && $(CMAKE_COMMAND) -P CMakeFiles/px4driver.dir/cmake_clean_target.cmake
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/px4driver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/build: Src/Lib/PX4Driver/libpx4driver.a
.PHONY : Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/build

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/requires: Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/Src/PX4Communicator.cpp.o.requires
.PHONY : Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/requires

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/clean:
	cd /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver && $(CMAKE_COMMAND) -P CMakeFiles/px4driver.dir/cmake_clean.cmake
.PHONY : Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/clean

Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/depend:
	cd /home/drona/Workspace/DronaForPX4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/drona/Workspace/DronaForPX4 /home/drona/Workspace/DronaForPX4/Src/Lib/PX4Driver /home/drona/Workspace/DronaForPX4/build /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver /home/drona/Workspace/DronaForPX4/build/Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Src/Lib/PX4Driver/CMakeFiles/px4driver.dir/depend

