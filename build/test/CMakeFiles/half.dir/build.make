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
CMAKE_SOURCE_DIR = /home/xt/example/c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xt/example/c/build

# Include any dependencies generated for this target.
include test/CMakeFiles/half.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/half.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/half.dir/flags.make

test/CMakeFiles/half.dir/half.c.o: test/CMakeFiles/half.dir/flags.make
test/CMakeFiles/half.dir/half.c.o: ../test/half.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xt/example/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/CMakeFiles/half.dir/half.c.o"
	cd /home/xt/example/c/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/half.dir/half.c.o   -c /home/xt/example/c/test/half.c

test/CMakeFiles/half.dir/half.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/half.dir/half.c.i"
	cd /home/xt/example/c/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xt/example/c/test/half.c > CMakeFiles/half.dir/half.c.i

test/CMakeFiles/half.dir/half.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/half.dir/half.c.s"
	cd /home/xt/example/c/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xt/example/c/test/half.c -o CMakeFiles/half.dir/half.c.s

# Object files for target half
half_OBJECTS = \
"CMakeFiles/half.dir/half.c.o"

# External object files for target half
half_EXTERNAL_OBJECTS =

test/half: test/CMakeFiles/half.dir/half.c.o
test/half: test/CMakeFiles/half.dir/build.make
test/half: test/CMakeFiles/half.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xt/example/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable half"
	cd /home/xt/example/c/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/half.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/half.dir/build: test/half

.PHONY : test/CMakeFiles/half.dir/build

test/CMakeFiles/half.dir/clean:
	cd /home/xt/example/c/build/test && $(CMAKE_COMMAND) -P CMakeFiles/half.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/half.dir/clean

test/CMakeFiles/half.dir/depend:
	cd /home/xt/example/c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xt/example/c /home/xt/example/c/test /home/xt/example/c/build /home/xt/example/c/build/test /home/xt/example/c/build/test/CMakeFiles/half.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/half.dir/depend

