# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug

# Include any dependencies generated for this target.
include matrixLib\CMakeFiles\projectLib.dir\depend.make
# Include the progress variables for this target.
include matrixLib\CMakeFiles\projectLib.dir\progress.make

# Include the compile flags for this target's objects.
include matrixLib\CMakeFiles\projectLib.dir\flags.make

matrixLib\CMakeFiles\projectLib.dir\src\matrix.cpp.obj: matrixLib\CMakeFiles\projectLib.dir\flags.make
matrixLib\CMakeFiles\projectLib.dir\src\matrix.cpp.obj: ..\matrixLib\src\matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrixLib/CMakeFiles/projectLib.dir/src/matrix.cpp.obj"
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\projectLib.dir\src\matrix.cpp.obj /FdCMakeFiles\projectLib.dir\projectLib.pdb /FS -c D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\matrixLib\src\matrix.cpp
<<
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug

matrixLib\CMakeFiles\projectLib.dir\src\matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projectLib.dir/src/matrix.cpp.i"
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\projectLib.dir\src\matrix.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\matrixLib\src\matrix.cpp
<<
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug

matrixLib\CMakeFiles\projectLib.dir\src\matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projectLib.dir/src/matrix.cpp.s"
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\projectLib.dir\src\matrix.cpp.s /c D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\matrixLib\src\matrix.cpp
<<
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug

# Object files for target projectLib
projectLib_OBJECTS = \
"CMakeFiles\projectLib.dir\src\matrix.cpp.obj"

# External object files for target projectLib
projectLib_EXTERNAL_OBJECTS =

matrixLib\projectLib.lib: matrixLib\CMakeFiles\projectLib.dir\src\matrix.cpp.obj
matrixLib\projectLib.lib: matrixLib\CMakeFiles\projectLib.dir\build.make
matrixLib\projectLib.lib: matrixLib\CMakeFiles\projectLib.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library projectLib.lib"
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib
	$(CMAKE_COMMAND) -P CMakeFiles\projectLib.dir\cmake_clean_target.cmake
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\lib.exe /nologo /machine:X86 /out:projectLib.lib @CMakeFiles\projectLib.dir\objects1.rsp 
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug

# Rule to build all files generated by this target.
matrixLib\CMakeFiles\projectLib.dir\build: matrixLib\projectLib.lib
.PHONY : matrixLib\CMakeFiles\projectLib.dir\build

matrixLib\CMakeFiles\projectLib.dir\clean:
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib
	$(CMAKE_COMMAND) -P CMakeFiles\projectLib.dir\cmake_clean.cmake
	cd D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug
.PHONY : matrixLib\CMakeFiles\projectLib.dir\clean

matrixLib\CMakeFiles\projectLib.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\matrixLib D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib D:\Lekcje\JiPP2\GitHub\JiPP2\Lab2\Projekt\cmake-build-debug\matrixLib\CMakeFiles\projectLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : matrixLib\CMakeFiles\projectLib.dir\depend

