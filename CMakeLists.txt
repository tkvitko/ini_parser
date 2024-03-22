cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(ini_parser)
add_executable(ini_parser src/main.cpp src/IniParser.cpp src/IniParser.hpp src/exceptions.h)
