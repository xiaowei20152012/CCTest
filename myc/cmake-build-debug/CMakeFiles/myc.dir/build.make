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
CMAKE_SOURCE_DIR = /Users/wei.li/Documents/MyDocuments/CCTest/myc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wei.li/Documents/MyDocuments/CCTest/myc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/myc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myc.dir/flags.make

CMakeFiles/myc.dir/main.c.o: CMakeFiles/myc.dir/flags.make
CMakeFiles/myc.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wei.li/Documents/MyDocuments/CCTest/myc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/myc.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/myc.dir/main.c.o   -c /Users/wei.li/Documents/MyDocuments/CCTest/myc/main.c

CMakeFiles/myc.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/myc.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wei.li/Documents/MyDocuments/CCTest/myc/main.c > CMakeFiles/myc.dir/main.c.i

CMakeFiles/myc.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/myc.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wei.li/Documents/MyDocuments/CCTest/myc/main.c -o CMakeFiles/myc.dir/main.c.s

# Object files for target myc
myc_OBJECTS = \
"CMakeFiles/myc.dir/main.c.o"

# External object files for target myc
myc_EXTERNAL_OBJECTS =

myc: CMakeFiles/myc.dir/main.c.o
myc: CMakeFiles/myc.dir/build.make
myc: CMakeFiles/myc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wei.li/Documents/MyDocuments/CCTest/myc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable myc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myc.dir/build: myc

.PHONY : CMakeFiles/myc.dir/build

CMakeFiles/myc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myc.dir/clean

CMakeFiles/myc.dir/depend:
	cd /Users/wei.li/Documents/MyDocuments/CCTest/myc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wei.li/Documents/MyDocuments/CCTest/myc /Users/wei.li/Documents/MyDocuments/CCTest/myc /Users/wei.li/Documents/MyDocuments/CCTest/myc/cmake-build-debug /Users/wei.li/Documents/MyDocuments/CCTest/myc/cmake-build-debug /Users/wei.li/Documents/MyDocuments/CCTest/myc/cmake-build-debug/CMakeFiles/myc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myc.dir/depend

