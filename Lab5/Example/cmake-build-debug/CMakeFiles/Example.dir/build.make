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
CMAKE_SOURCE_DIR = D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Example.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\Example.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Example.dir\flags.make

CMakeFiles\Example.dir\src\main.cpp.obj: CMakeFiles\Example.dir\flags.make
CMakeFiles\Example.dir\src\main.cpp.obj: ..\src\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Example.dir/src/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Example.dir\src\main.cpp.obj /FdCMakeFiles\Example.dir\ /FS -c D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\src\main.cpp
<<

CMakeFiles\Example.dir\src\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Example.dir/src/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Example.dir\src\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\src\main.cpp
<<

CMakeFiles\Example.dir\src\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Example.dir/src/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Example.dir\src\main.cpp.s /c D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\src\main.cpp
<<

CMakeFiles\Example.dir\src\Point.cpp.obj: CMakeFiles\Example.dir\flags.make
CMakeFiles\Example.dir\src\Point.cpp.obj: ..\src\Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Example.dir/src/Point.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Example.dir\src\Point.cpp.obj /FdCMakeFiles\Example.dir\ /FS -c D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\src\Point.cpp
<<

CMakeFiles\Example.dir\src\Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Example.dir/src/Point.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\Example.dir\src\Point.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\src\Point.cpp
<<

CMakeFiles\Example.dir\src\Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Example.dir/src/Point.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Example.dir\src\Point.cpp.s /c D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\src\Point.cpp
<<

# Object files for target Example
Example_OBJECTS = \
"CMakeFiles\Example.dir\src\main.cpp.obj" \
"CMakeFiles\Example.dir\src\Point.cpp.obj"

# External object files for target Example
Example_EXTERNAL_OBJECTS =

Example.exe: CMakeFiles\Example.dir\src\main.cpp.obj
Example.exe: CMakeFiles\Example.dir\src\Point.cpp.obj
Example.exe: CMakeFiles\Example.dir\build.make
Example.exe: CMakeFiles\Example.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Example.exe"
	"D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Example.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100162~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Example.dir\objects1.rsp @<<
 /out:Example.exe /implib:Example.lib /pdb:D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug\Example.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Example.dir\build: Example.exe
.PHONY : CMakeFiles\Example.dir\build

CMakeFiles\Example.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Example.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Example.dir\clean

CMakeFiles\Example.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug D:\Lekcje\JiPP2\GitHub\JiPP2\Lab5\Example\cmake-build-debug\CMakeFiles\Example.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Example.dir\depend

