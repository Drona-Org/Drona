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

# Utility rule file for linker.

# Include the progress variables for this target.
include Samples/PSample/CMakeFiles/linker.dir/progress.make

Samples/PSample/CMakeFiles/linker:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/drona/Workspace/DronaForPX4/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Linking P ..."
	cd /home/drona/Workspace/DronaForPX4/Samples/PSample/Generated && /usr/bin/cmake -E make_directory /home/drona/Workspace/DronaForPX4/Samples/PSample/Generated
	cd /home/drona/Workspace/DronaForPX4/Samples/PSample/Generated && mono /home/drona/Workspace/DronaForPX4/Submodule/P/Bld/Drops/Debug/x86/Binaries/Pc.exe /link /outputDir:/home/drona/Workspace/DronaForPX4/Samples/PSample/Generated PingPong.4ml

linker: Samples/PSample/CMakeFiles/linker
linker: Samples/PSample/CMakeFiles/linker.dir/build.make
.PHONY : linker

# Rule to build all files generated by this target.
Samples/PSample/CMakeFiles/linker.dir/build: linker
.PHONY : Samples/PSample/CMakeFiles/linker.dir/build

Samples/PSample/CMakeFiles/linker.dir/clean:
	cd /home/drona/Workspace/DronaForPX4/build/Samples/PSample && $(CMAKE_COMMAND) -P CMakeFiles/linker.dir/cmake_clean.cmake
.PHONY : Samples/PSample/CMakeFiles/linker.dir/clean

Samples/PSample/CMakeFiles/linker.dir/depend:
	cd /home/drona/Workspace/DronaForPX4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/drona/Workspace/DronaForPX4 /home/drona/Workspace/DronaForPX4/Samples/PSample /home/drona/Workspace/DronaForPX4/build /home/drona/Workspace/DronaForPX4/build/Samples/PSample /home/drona/Workspace/DronaForPX4/build/Samples/PSample/CMakeFiles/linker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Samples/PSample/CMakeFiles/linker.dir/depend
