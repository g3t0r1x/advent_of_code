cmake_minimum_required(VERSION 3.8)

set(This SrcFiles)

add_subdirectory(logger)
add_subdirectory(2019)

file(GLOB_RECURSE Sources *.cpp)
file(GLOB_RECURSE Headers *.hpp)

add_library(${This} STATIC ${Sources} ${Headers})
target_include_directories(${This} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
