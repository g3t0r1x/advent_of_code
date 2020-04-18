cmake_minimum_required(VERSION 3.8)

set(This 2019_day_1)

set(Headers
    Fuel.hpp
    Module.hpp
)

set(Sources
    Fuel.cpp
    Module.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
target_link_libraries(${This} PUBLIC SrcFiles)
