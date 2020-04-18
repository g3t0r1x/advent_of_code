cmake_minimum_required(VERSION 3.8)

set(This AdventOfCode)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} $ENV{MY_CXXFLAGS}")

enable_testing()

add_subdirectory(googletest)
add_subdirectory(src)
add_subdirectory(tests)
