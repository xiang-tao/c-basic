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
include test/CMakeFiles/yuesefu.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/yuesefu.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/yuesefu.dir/flags.make

test/CMakeFiles/yuesefu.dir/yuesefu.c.o: test/CMakeFiles/yuesefu.dir/flags.make
test/CMakeFiles/yuesefu.dir/yuesefu.c.o: ../test/yuesefu.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xt/github/c-basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/CMakeFiles/yuesefu.dir/yuesefu.c.o"
	cd /home/xt/github/c-basic/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/yuesefu.dir/yuesefu.c.o   -c /home/xt/github/c-basic/test/yuesefu.c

test/CMakeFiles/yuesefu.dir/yuesefu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/yuesefu.dir/yuesefu.c.i"
	cd /home/xt/github/c-basic/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xt/github/c-basic/test/yuesefu.c > CMakeFiles/yuesefu.dir/yuesefu.c.i

test/CMakeFiles/yuesefu.dir/yuesefu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/yuesefu.dir/yuesefu.c.s"
	cd /home/xt/github/c-basic/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xt/github/c-basic/test/yuesefu.c -o CMakeFiles/yuesefu.dir/yuesefu.c.s

# Object files for target yuesefu
yuesefu_OBJECTS = \
"CMakeFiles/yuesefu.dir/yuesefu.c.o"

# External object files for target yuesefu
yuesefu_EXTERNAL_OBJECTS =

test/yuesefu: test/CMakeFiles/yuesefu.dir/yuesefu.c.o
test/yuesefu: test/CMakeFiles/yuesefu.dir/build.make
test/yuesefu: test/CMakeFiles/yuesefu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xt/github/c-basic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable yuesefu"
	cd /home/xt/github/c-basic/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yuesefu.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/yuesefu.dir/build: test/yuesefu

.PHONY : test/CMakeFiles/yuesefu.dir/build

test/CMakeFiles/yuesefu.dir/clean:
	cd /home/xt/github/c-basic/build/test && $(CMAKE_COMMAND) -P CMakeFiles/yuesefu.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/yuesefu.dir/clean

test/CMakeFiles/yuesefu.dir/depend:
	cd /home/xt/github/c-basic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xt/github/c-basic /home/xt/github/c-basic/test /home/xt/github/c-basic/build /home/xt/github/c-basic/build/test /home/xt/github/c-basic/build/test/CMakeFiles/yuesefu.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/yuesefu.dir/depend
