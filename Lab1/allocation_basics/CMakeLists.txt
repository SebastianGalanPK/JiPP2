cmake_minimum_required(VERSION 3.20)
project(JiPP2)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(JiPP2 ../simpleCalc/src/main.cpp ../simpleCalc/src/calc.cpp ../Lab2/test.cpp ../Lab2/test.h ../tt/test.cpp ../tt/test.h)
