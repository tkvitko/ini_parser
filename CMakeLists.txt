cmake_minimum_required(VERSION 3.22.0)
project(ini_parser)
add_executable(ini_parser src/main.cpp src/IniParser.cpp src/IniParser.hpp src/exceptions.h)
