# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/edz/project/data-structure/ch03/example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/edz/project/data-structure/ch03/example/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack.dir/flags.make

CMakeFiles/stack.dir/stack.c.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stack.c.o: ../stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/edz/project/data-structure/ch03/example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/stack.dir/stack.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stack.dir/stack.c.o   -c /Users/edz/project/data-structure/ch03/example/stack.c

CMakeFiles/stack.dir/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stack.dir/stack.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/edz/project/data-structure/ch03/example/stack.c > CMakeFiles/stack.dir/stack.c.i

CMakeFiles/stack.dir/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stack.dir/stack.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/edz/project/data-structure/ch03/example/stack.c -o CMakeFiles/stack.dir/stack.c.s

CMakeFiles/stack.dir/stackDemo.c.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/stackDemo.c.o: ../stackDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/edz/project/data-structure/ch03/example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/stack.dir/stackDemo.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stack.dir/stackDemo.c.o   -c /Users/edz/project/data-structure/ch03/example/stackDemo.c

CMakeFiles/stack.dir/stackDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stack.dir/stackDemo.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/edz/project/data-structure/ch03/example/stackDemo.c > CMakeFiles/stack.dir/stackDemo.c.i

CMakeFiles/stack.dir/stackDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stack.dir/stackDemo.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/edz/project/data-structure/ch03/example/stackDemo.c -o CMakeFiles/stack.dir/stackDemo.c.s

CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.o: /Users/edz/project/data-structure/ch01/examples/seqlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/edz/project/data-structure/ch03/example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.o   -c /Users/edz/project/data-structure/ch01/examples/seqlist.c

CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/edz/project/data-structure/ch01/examples/seqlist.c > CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.i

CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/edz/project/data-structure/ch01/examples/seqlist.c -o CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.s

CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.o: CMakeFiles/stack.dir/flags.make
CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.o: /Users/edz/project/data-structure/ch02/examples/singlyIntNode.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/edz/project/data-structure/ch03/example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.o   -c /Users/edz/project/data-structure/ch02/examples/singlyIntNode.c

CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/edz/project/data-structure/ch02/examples/singlyIntNode.c > CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.i

CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/edz/project/data-structure/ch02/examples/singlyIntNode.c -o CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.s

# Object files for target stack
stack_OBJECTS = \
"CMakeFiles/stack.dir/stack.c.o" \
"CMakeFiles/stack.dir/stackDemo.c.o" \
"CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.o" \
"CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.o"

# External object files for target stack
stack_EXTERNAL_OBJECTS =

stack: CMakeFiles/stack.dir/stack.c.o
stack: CMakeFiles/stack.dir/stackDemo.c.o
stack: CMakeFiles/stack.dir/Users/edz/project/data-structure/ch01/examples/seqlist.c.o
stack: CMakeFiles/stack.dir/Users/edz/project/data-structure/ch02/examples/singlyIntNode.c.o
stack: CMakeFiles/stack.dir/build.make
stack: CMakeFiles/stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/edz/project/data-structure/ch03/example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable stack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack.dir/build: stack

.PHONY : CMakeFiles/stack.dir/build

CMakeFiles/stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack.dir/clean

CMakeFiles/stack.dir/depend:
	cd /Users/edz/project/data-structure/ch03/example/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/edz/project/data-structure/ch03/example /Users/edz/project/data-structure/ch03/example /Users/edz/project/data-structure/ch03/example/cmake-build-debug /Users/edz/project/data-structure/ch03/example/cmake-build-debug /Users/edz/project/data-structure/ch03/example/cmake-build-debug/CMakeFiles/stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack.dir/depend

