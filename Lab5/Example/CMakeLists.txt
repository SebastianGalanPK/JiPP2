cmake_minimum_required(VERSION 3.16)

project(Example)
include_directories(include)

add_executable(Example src/main.cpp src/Point.cpp)