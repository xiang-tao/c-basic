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
include test/CMakeFiles/shape.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/shape.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/shape.dir/flags.make

test/CMakeFiles/shape.dir/shape.c.o: test/CMakeFiles/shape.dir/flags.make
test/CMakeFiles/shape.dir/shape.c.o: ../test/shape.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xt/example/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/CMakeFiles/shape.dir/shape.c.o"
	cd /home/xt/example/c/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/shape.dir/shape.c.o   -c /home/xt/example/c/test/shape.c

test/CMakeFiles/shape.dir/shape.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/shape.dir/shape.c.i"
	cd /home/xt/example/c/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xt/example/c/test/shape.c > CMakeFiles/shape.dir/shape.c.i

test/CMakeFiles/shape.dir/shape.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/shape.dir/shape.c.s"
	cd /home/xt/example/c/build/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xt/example/c/test/shape.c -o CMakeFiles/shape.dir/shape.c.s

# Object files for target shape
shape_OBJECTS = \
"CMakeFiles/shape.dir/shape.c.o"

# External object files for target shape
shape_EXTERNAL_OBJECTS =

test/shape: test/CMakeFiles/shape.dir/shape.c.o
test/shape: test/CMakeFiles/shape.dir/build.make
test/shape: test/CMakeFiles/shape.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xt/example/c/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable shape"
	cd /home/xt/example/c/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shape.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/shape.dir/build: test/shape

.PHONY : test/CMakeFiles/shape.dir/build

test/CMakeFiles/shape.dir/clean:
	cd /home/xt/example/c/build/test && $(CMAKE_COMMAND) -P CMakeFiles/shape.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/shape.dir/clean

test/CMakeFiles/shape.dir/depend:
	cd /home/xt/example/c/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xt/example/c /home/xt/example/c/test /home/xt/example/c/build /home/xt/example/c/build/test /home/xt/example/c/build/test/CMakeFiles/shape.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/shape.dir/depend

