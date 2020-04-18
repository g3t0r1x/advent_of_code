cmake_minimum_required(VERSION 3.8)

set(This 2019_day1)

set(Headers
    Converter.hpp
    Fuel.hpp
    Module.hpp
)

set(Sources
    Converter.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
target_link_libraries(${This} PUBLIC SrcFiles)
