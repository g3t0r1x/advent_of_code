cmake_minimum_required(VERSION 3.8)

set(This_lib 2020_day3_lib)
set(This_bin 2020_day3_bin)

set(Headers
    Coords.hpp
    Geology.hpp
    IMap.hpp
    ISquare.hpp
    ITobogan.hpp
    Interpreter.hpp
    Map.hpp
    Tobogan.hpp
    squares/Empty.hpp
    squares/Tree.hpp
)

set(Sources_lib
    Geology.cpp
    Map.cpp
    Tobogan.cpp
    squares/Empty.cpp
    squares/Tree.cpp
)

set(Sources_bin
    ${Sources_lib}
    main.cpp
)

add_library(${This_lib} STATIC ${Sources_lib} ${Headers})
target_link_libraries(${This_lib} PUBLIC SrcFiles)

add_executable(${This_bin} ${Sources_bin})
target_link_libraries(${This_bin} PUBLIC SrcFiles)
