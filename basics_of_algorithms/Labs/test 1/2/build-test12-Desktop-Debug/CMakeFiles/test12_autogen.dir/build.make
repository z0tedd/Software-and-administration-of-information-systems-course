# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/test12"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/build-test12-Desktop-Debug"

# Utility rule file for test12_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/test12_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test12_autogen.dir/progress.make

CMakeFiles/test12_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/build-test12-Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target test12"
	/usr/bin/cmake -E cmake_autogen "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/build-test12-Desktop-Debug/CMakeFiles/test12_autogen.dir/AutogenInfo.json" Debug

test12_autogen: CMakeFiles/test12_autogen
test12_autogen: CMakeFiles/test12_autogen.dir/build.make
.PHONY : test12_autogen

# Rule to build all files generated by this target.
CMakeFiles/test12_autogen.dir/build: test12_autogen
.PHONY : CMakeFiles/test12_autogen.dir/build

CMakeFiles/test12_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test12_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test12_autogen.dir/clean

CMakeFiles/test12_autogen.dir/depend:
	cd "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/build-test12-Desktop-Debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/test12" "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/test12" "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/build-test12-Desktop-Debug" "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/build-test12-Desktop-Debug" "/home/z0tedd/Documents/university/basics_of_algorithms/Labs/test 1/2/build-test12-Desktop-Debug/CMakeFiles/test12_autogen.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/test12_autogen.dir/depend
