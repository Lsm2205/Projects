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
CMAKE_SOURCE_DIR = "/home/it/Рабочий стол/c++/projects/Lession_VI"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/it/Рабочий стол/c++/projects/Lession_VI/build"

# Include any dependencies generated for this target.
include CMakeFiles/main6.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main6.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main6.exe.dir/flags.make

CMakeFiles/main6.exe.dir/main6.cpp.o: CMakeFiles/main6.exe.dir/flags.make
CMakeFiles/main6.exe.dir/main6.cpp.o: ../main6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/it/Рабочий стол/c++/projects/Lession_VI/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main6.exe.dir/main6.cpp.o"
	/bin/clang++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main6.exe.dir/main6.cpp.o -c "/home/it/Рабочий стол/c++/projects/Lession_VI/main6.cpp"

CMakeFiles/main6.exe.dir/main6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main6.exe.dir/main6.cpp.i"
	/bin/clang++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/it/Рабочий стол/c++/projects/Lession_VI/main6.cpp" > CMakeFiles/main6.exe.dir/main6.cpp.i

CMakeFiles/main6.exe.dir/main6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main6.exe.dir/main6.cpp.s"
	/bin/clang++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/it/Рабочий стол/c++/projects/Lession_VI/main6.cpp" -o CMakeFiles/main6.exe.dir/main6.cpp.s

# Object files for target main6.exe
main6_exe_OBJECTS = \
"CMakeFiles/main6.exe.dir/main6.cpp.o"

# External object files for target main6.exe
main6_exe_EXTERNAL_OBJECTS =

main6.exe: CMakeFiles/main6.exe.dir/main6.cpp.o
main6.exe: CMakeFiles/main6.exe.dir/build.make
main6.exe: CMakeFiles/main6.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/it/Рабочий стол/c++/projects/Lession_VI/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main6.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main6.exe.dir/build: main6.exe

.PHONY : CMakeFiles/main6.exe.dir/build

CMakeFiles/main6.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main6.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main6.exe.dir/clean

CMakeFiles/main6.exe.dir/depend:
	cd "/home/it/Рабочий стол/c++/projects/Lession_VI/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/it/Рабочий стол/c++/projects/Lession_VI" "/home/it/Рабочий стол/c++/projects/Lession_VI" "/home/it/Рабочий стол/c++/projects/Lession_VI/build" "/home/it/Рабочий стол/c++/projects/Lession_VI/build" "/home/it/Рабочий стол/c++/projects/Lession_VI/build/CMakeFiles/main6.exe.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/main6.exe.dir/depend

