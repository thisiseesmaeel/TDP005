# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ismailsafwat/CLionProjects/ShapeShooters

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ShapeShooters.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ShapeShooters.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ShapeShooters.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ShapeShooters.dir/flags.make

CMakeFiles/ShapeShooters.dir/main.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/main.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/main.cpp
CMakeFiles/ShapeShooters.dir/main.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ShapeShooters.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/main.cpp.o -MF CMakeFiles/ShapeShooters.dir/main.cpp.o.d -o CMakeFiles/ShapeShooters.dir/main.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/main.cpp

CMakeFiles/ShapeShooters.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/main.cpp > CMakeFiles/ShapeShooters.dir/main.cpp.i

CMakeFiles/ShapeShooters.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/main.cpp -o CMakeFiles/ShapeShooters.dir/main.cpp.s

CMakeFiles/ShapeShooters.dir/Player.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/Player.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/Player.cpp
CMakeFiles/ShapeShooters.dir/Player.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ShapeShooters.dir/Player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/Player.cpp.o -MF CMakeFiles/ShapeShooters.dir/Player.cpp.o.d -o CMakeFiles/ShapeShooters.dir/Player.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/Player.cpp

CMakeFiles/ShapeShooters.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/Player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/Player.cpp > CMakeFiles/ShapeShooters.dir/Player.cpp.i

CMakeFiles/ShapeShooters.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/Player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/Player.cpp -o CMakeFiles/ShapeShooters.dir/Player.cpp.s

CMakeFiles/ShapeShooters.dir/Bullet.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/Bullet.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/Bullet.cpp
CMakeFiles/ShapeShooters.dir/Bullet.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ShapeShooters.dir/Bullet.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/Bullet.cpp.o -MF CMakeFiles/ShapeShooters.dir/Bullet.cpp.o.d -o CMakeFiles/ShapeShooters.dir/Bullet.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/Bullet.cpp

CMakeFiles/ShapeShooters.dir/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/Bullet.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/Bullet.cpp > CMakeFiles/ShapeShooters.dir/Bullet.cpp.i

CMakeFiles/ShapeShooters.dir/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/Bullet.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/Bullet.cpp -o CMakeFiles/ShapeShooters.dir/Bullet.cpp.s

CMakeFiles/ShapeShooters.dir/Enemy.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/Enemy.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/Enemy.cpp
CMakeFiles/ShapeShooters.dir/Enemy.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ShapeShooters.dir/Enemy.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/Enemy.cpp.o -MF CMakeFiles/ShapeShooters.dir/Enemy.cpp.o.d -o CMakeFiles/ShapeShooters.dir/Enemy.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/Enemy.cpp

CMakeFiles/ShapeShooters.dir/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/Enemy.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/Enemy.cpp > CMakeFiles/ShapeShooters.dir/Enemy.cpp.i

CMakeFiles/ShapeShooters.dir/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/Enemy.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/Enemy.cpp -o CMakeFiles/ShapeShooters.dir/Enemy.cpp.s

CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/GameWindow.cpp
CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o -MF CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o.d -o CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/GameWindow.cpp

CMakeFiles/ShapeShooters.dir/GameWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/GameWindow.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/GameWindow.cpp > CMakeFiles/ShapeShooters.dir/GameWindow.cpp.i

CMakeFiles/ShapeShooters.dir/GameWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/GameWindow.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/GameWindow.cpp -o CMakeFiles/ShapeShooters.dir/GameWindow.cpp.s

CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/GameGUI.cpp
CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o -MF CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o.d -o CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/GameGUI.cpp

CMakeFiles/ShapeShooters.dir/GameGUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/GameGUI.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/GameGUI.cpp > CMakeFiles/ShapeShooters.dir/GameGUI.cpp.i

CMakeFiles/ShapeShooters.dir/GameGUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/GameGUI.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/GameGUI.cpp -o CMakeFiles/ShapeShooters.dir/GameGUI.cpp.s

CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/GameUniverse.cpp
CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o -MF CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o.d -o CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/GameUniverse.cpp

CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/GameUniverse.cpp > CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.i

CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/GameUniverse.cpp -o CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.s

CMakeFiles/ShapeShooters.dir/Game.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/Game.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/Game.cpp
CMakeFiles/ShapeShooters.dir/Game.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ShapeShooters.dir/Game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/Game.cpp.o -MF CMakeFiles/ShapeShooters.dir/Game.cpp.o.d -o CMakeFiles/ShapeShooters.dir/Game.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/Game.cpp

CMakeFiles/ShapeShooters.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/Game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/Game.cpp > CMakeFiles/ShapeShooters.dir/Game.cpp.i

CMakeFiles/ShapeShooters.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/Game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/Game.cpp -o CMakeFiles/ShapeShooters.dir/Game.cpp.s

CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o: CMakeFiles/ShapeShooters.dir/flags.make
CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o: /Users/ismailsafwat/CLionProjects/ShapeShooters/CollisionManagement.cpp
CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o: CMakeFiles/ShapeShooters.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o -MF CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o.d -o CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o -c /Users/ismailsafwat/CLionProjects/ShapeShooters/CollisionManagement.cpp

CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ismailsafwat/CLionProjects/ShapeShooters/CollisionManagement.cpp > CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.i

CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ismailsafwat/CLionProjects/ShapeShooters/CollisionManagement.cpp -o CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.s

# Object files for target ShapeShooters
ShapeShooters_OBJECTS = \
"CMakeFiles/ShapeShooters.dir/main.cpp.o" \
"CMakeFiles/ShapeShooters.dir/Player.cpp.o" \
"CMakeFiles/ShapeShooters.dir/Bullet.cpp.o" \
"CMakeFiles/ShapeShooters.dir/Enemy.cpp.o" \
"CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o" \
"CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o" \
"CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o" \
"CMakeFiles/ShapeShooters.dir/Game.cpp.o" \
"CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o"

# External object files for target ShapeShooters
ShapeShooters_EXTERNAL_OBJECTS =

ShapeShooters: CMakeFiles/ShapeShooters.dir/main.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/Player.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/Bullet.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/Enemy.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/GameWindow.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/GameGUI.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/GameUniverse.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/Game.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/CollisionManagement.cpp.o
ShapeShooters: CMakeFiles/ShapeShooters.dir/build.make
ShapeShooters: /opt/homebrew/lib/libsfml-graphics.2.5.1.dylib
ShapeShooters: /opt/homebrew/lib/libsfml-audio.2.5.1.dylib
ShapeShooters: /opt/homebrew/lib/libsfml-network.2.5.1.dylib
ShapeShooters: /opt/homebrew/lib/libsfml-window.2.5.1.dylib
ShapeShooters: /opt/homebrew/lib/libsfml-system.2.5.1.dylib
ShapeShooters: CMakeFiles/ShapeShooters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable ShapeShooters"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ShapeShooters.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ShapeShooters.dir/build: ShapeShooters
.PHONY : CMakeFiles/ShapeShooters.dir/build

CMakeFiles/ShapeShooters.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ShapeShooters.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ShapeShooters.dir/clean

CMakeFiles/ShapeShooters.dir/depend:
	cd /Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ismailsafwat/CLionProjects/ShapeShooters /Users/ismailsafwat/CLionProjects/ShapeShooters /Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug /Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug /Users/ismailsafwat/CLionProjects/ShapeShooters/cmake-build-debug/CMakeFiles/ShapeShooters.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ShapeShooters.dir/depend

