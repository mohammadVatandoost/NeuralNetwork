# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/mohammad/SimpleNN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mohammad/SimpleNN

# Include any dependencies generated for this target.
include test/CMakeFiles/SimpleNN_test.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/SimpleNN_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/SimpleNN_test.dir/flags.make

test/CMakeFiles/SimpleNN_test.dir/main.cpp.o: test/CMakeFiles/SimpleNN_test.dir/flags.make
test/CMakeFiles/SimpleNN_test.dir/main.cpp.o: test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohammad/SimpleNN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/SimpleNN_test.dir/main.cpp.o"
	cd /home/mohammad/SimpleNN/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimpleNN_test.dir/main.cpp.o -c /home/mohammad/SimpleNN/test/main.cpp

test/CMakeFiles/SimpleNN_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimpleNN_test.dir/main.cpp.i"
	cd /home/mohammad/SimpleNN/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohammad/SimpleNN/test/main.cpp > CMakeFiles/SimpleNN_test.dir/main.cpp.i

test/CMakeFiles/SimpleNN_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimpleNN_test.dir/main.cpp.s"
	cd /home/mohammad/SimpleNN/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohammad/SimpleNN/test/main.cpp -o CMakeFiles/SimpleNN_test.dir/main.cpp.s

test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.requires:

.PHONY : test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.requires

test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.provides: test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/SimpleNN_test.dir/build.make test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.provides.build
.PHONY : test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.provides

test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.provides.build: test/CMakeFiles/SimpleNN_test.dir/main.cpp.o


# Object files for target SimpleNN_test
SimpleNN_test_OBJECTS = \
"CMakeFiles/SimpleNN_test.dir/main.cpp.o"

# External object files for target SimpleNN_test
SimpleNN_test_EXTERNAL_OBJECTS =

test/SimpleNN_test: test/CMakeFiles/SimpleNN_test.dir/main.cpp.o
test/SimpleNN_test: test/CMakeFiles/SimpleNN_test.dir/build.make
test/SimpleNN_test: src/libSimpleNN_lib.a
test/SimpleNN_test: lib/libgtest.a
test/SimpleNN_test: test/CMakeFiles/SimpleNN_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mohammad/SimpleNN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SimpleNN_test"
	cd /home/mohammad/SimpleNN/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimpleNN_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/SimpleNN_test.dir/build: test/SimpleNN_test

.PHONY : test/CMakeFiles/SimpleNN_test.dir/build

test/CMakeFiles/SimpleNN_test.dir/requires: test/CMakeFiles/SimpleNN_test.dir/main.cpp.o.requires

.PHONY : test/CMakeFiles/SimpleNN_test.dir/requires

test/CMakeFiles/SimpleNN_test.dir/clean:
	cd /home/mohammad/SimpleNN/test && $(CMAKE_COMMAND) -P CMakeFiles/SimpleNN_test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/SimpleNN_test.dir/clean

test/CMakeFiles/SimpleNN_test.dir/depend:
	cd /home/mohammad/SimpleNN && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mohammad/SimpleNN /home/mohammad/SimpleNN/test /home/mohammad/SimpleNN /home/mohammad/SimpleNN/test /home/mohammad/SimpleNN/test/CMakeFiles/SimpleNN_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/SimpleNN_test.dir/depend

