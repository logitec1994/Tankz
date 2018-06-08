cmake_minimum_required(VERSION 3.8)
project(Tankz)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp iControls.hpp)
add_executable(Tankz ${SOURCE_FILES} iControls.hpp)