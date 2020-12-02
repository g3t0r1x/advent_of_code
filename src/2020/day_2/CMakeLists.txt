cmake_minimum_required(VERSION 3.8)

set(This_lib 2020_day2_lib)
set(This_bin 2020_day2_bin)

set(Headers
    IStrategy.hpp
    Interpreter.hpp
    PasswordData.hpp
    Passwords.hpp
    strategies/MinMax.hpp
    strategies/Position.hpp
)

set(Sources_lib
    Passwords.cpp
    strategies/MinMax.cpp
    strategies/Position.cpp
)

set(Sources_bin
    ${Sources_lib}
    main.cpp
)

add_library(${This_lib} STATIC ${Sources_lib} ${Headers})
target_link_libraries(${This_lib} PUBLIC SrcFiles)

add_executable(${This_bin} ${Sources_bin})
target_link_libraries(${This_bin} PUBLIC SrcFiles)
