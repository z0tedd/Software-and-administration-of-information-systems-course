# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_SOURCE_DIR = "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug"

# Utility rule file for Hangman_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Hangman_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Hangman_autogen.dir/progress.make

CMakeFiles/Hangman_autogen: Hangman_autogen/timestamp

Hangman_autogen/timestamp: /usr/lib/qt6/moc
Hangman_autogen/timestamp: /usr/lib/qt6/uic
Hangman_autogen/timestamp: CMakeFiles/Hangman_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Hangman"
	/usr/bin/cmake -E cmake_autogen "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug/CMakeFiles/Hangman_autogen.dir/AutogenInfo.json" Debug
	/usr/bin/cmake -E touch "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug/Hangman_autogen/timestamp"

Hangman_autogen: CMakeFiles/Hangman_autogen
Hangman_autogen: Hangman_autogen/timestamp
Hangman_autogen: CMakeFiles/Hangman_autogen.dir/build.make
.PHONY : Hangman_autogen

# Rule to build all files generated by this target.
CMakeFiles/Hangman_autogen.dir/build: Hangman_autogen
.PHONY : CMakeFiles/Hangman_autogen.dir/build

CMakeFiles/Hangman_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Hangman_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Hangman_autogen.dir/clean

CMakeFiles/Hangman_autogen.dir/depend:
	cd "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman" "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman" "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug" "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug" "/home/z0tedd/Documents/university/3 semester/programmingc++/kursax/kursax/Hangman/build/Desktop-Debug/CMakeFiles/Hangman_autogen.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Hangman_autogen.dir/depend
