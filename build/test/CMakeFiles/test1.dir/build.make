# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_SOURCE_DIR = /home/xt/github/c-basic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xt/github/c-basic/build

# Include any dependencies generated for this target.
include test/CMakeFiles/test1.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test1.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test1.dir/flags.make

test/CMakeFiles/test1.dir/test1.c.o: test/CMakeFiles/test1.dir/flags.make
test/CMakeFiles/test1.dir/test1.c.o: ../test/test1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xt/github/c-basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/CMakeFiles/test1.dir/test1.c.o"
	cd /home/xt/github/c-basic/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test1.dir/test1.c.o   -c /home/xt/github/c-basic/test/test1.c

test/CMakeFiles/test1.dir/test1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test1.dir/test1.c.i"
	cd /home/xt/github/c-basic/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xt/github/c-basic/test/test1.c > CMakeFiles/test1.dir/test1.c.i

test/CMakeFiles/test1.dir/test1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test1.dir/test1.c.s"
	cd /home/xt/github/c-basic/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xt/github/c-basic/test/test1.c -o CMakeFiles/test1.dir/test1.c.s

# Object files for target test1
test1_OBJECTS = \
"CMakeFiles/test1.dir/test1.c.o"

# External object files for target test1
test1_EXTERNAL_OBJECTS =

test/test1: test/CMakeFiles/test1.dir/test1.c.o
test/test1: test/CMakeFiles/test1.dir/build.make
test/test1: test/CMakeFiles/test1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xt/github/c-basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test1"
	cd /home/xt/github/c-basic/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test1.dir/build: test/test1

.PHONY : test/CMakeFiles/test1.dir/build

test/CMakeFiles/test1.dir/clean:
	cd /home/xt/github/c-basic/build/test && $(CMAKE_COMMAND) -P CMakeFiles/test1.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test1.dir/clean

test/CMakeFiles/test1.dir/depend:
	cd /home/xt/github/c-basic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xt/github/c-basic /home/xt/github/c-basic/test /home/xt/github/c-basic/build /home/xt/github/c-basic/build/test /home/xt/github/c-basic/build/test/CMakeFiles/test1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test1.dir/depend

