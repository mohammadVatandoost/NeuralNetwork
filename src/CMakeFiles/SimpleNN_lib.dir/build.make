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
include src/CMakeFiles/SimpleNN_lib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/SimpleNN_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/SimpleNN_lib.dir/flags.make

src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o: src/CMakeFiles/SimpleNN_lib.dir/flags.make
src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohammad/SimpleNN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o"
	cd /home/mohammad/SimpleNN/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SimpleNN_lib.dir/main.cpp.o -c /home/mohammad/SimpleNN/src/main.cpp

src/CMakeFiles/SimpleNN_lib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimpleNN_lib.dir/main.cpp.i"
	cd /home/mohammad/SimpleNN/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohammad/SimpleNN/src/main.cpp > CMakeFiles/SimpleNN_lib.dir/main.cpp.i

src/CMakeFiles/SimpleNN_lib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimpleNN_lib.dir/main.cpp.s"
	cd /home/mohammad/SimpleNN/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohammad/SimpleNN/src/main.cpp -o CMakeFiles/SimpleNN_lib.dir/main.cpp.s

src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.requires

src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.provides: src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/SimpleNN_lib.dir/build.make src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.provides

src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.provides.build: src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o


# Object files for target SimpleNN_lib
SimpleNN_lib_OBJECTS = \
"CMakeFiles/SimpleNN_lib.dir/main.cpp.o"

# External object files for target SimpleNN_lib
SimpleNN_lib_EXTERNAL_OBJECTS =

src/libSimpleNN_lib.a: src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o
src/libSimpleNN_lib.a: src/CMakeFiles/SimpleNN_lib.dir/build.make
src/libSimpleNN_lib.a: src/CMakeFiles/SimpleNN_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mohammad/SimpleNN/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libSimpleNN_lib.a"
	cd /home/mohammad/SimpleNN/src && $(CMAKE_COMMAND) -P CMakeFiles/SimpleNN_lib.dir/cmake_clean_target.cmake
	cd /home/mohammad/SimpleNN/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimpleNN_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/SimpleNN_lib.dir/build: src/libSimpleNN_lib.a

.PHONY : src/CMakeFiles/SimpleNN_lib.dir/build

src/CMakeFiles/SimpleNN_lib.dir/requires: src/CMakeFiles/SimpleNN_lib.dir/main.cpp.o.requires

.PHONY : src/CMakeFiles/SimpleNN_lib.dir/requires

src/CMakeFiles/SimpleNN_lib.dir/clean:
	cd /home/mohammad/SimpleNN/src && $(CMAKE_COMMAND) -P CMakeFiles/SimpleNN_lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/SimpleNN_lib.dir/clean

src/CMakeFiles/SimpleNN_lib.dir/depend:
	cd /home/mohammad/SimpleNN && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mohammad/SimpleNN /home/mohammad/SimpleNN/src /home/mohammad/SimpleNN /home/mohammad/SimpleNN/src /home/mohammad/SimpleNN/src/CMakeFiles/SimpleNN_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/SimpleNN_lib.dir/depend

