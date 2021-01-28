cmake_minimum_required(VERSION 3.8)

set(This_lib 2020_day6_lib)
set(This_bin 2020_day6_bin)

set(Headers
    Group.hpp
    Groups.hpp
    ICountingStrategy.hpp
    Interpreter.hpp
    strategies/CountRepeated.hpp
    strategies/CountUnique.hpp
)

set(Sources_lib
    Group.cpp
    Groups.cpp
    strategies/CountRepeated.cpp
    strategies/CountUnique.cpp
)

set(Sources_bin
    ${Sources_lib}
    main.cpp
)

add_library(${This_lib} STATIC ${Sources_lib} ${Headers})
target_link_libraries(${This_lib} PUBLIC SrcFiles)

add_executable(${This_bin} ${Sources_bin})
target_link_libraries(${This_bin} PUBLIC SrcFiles)
