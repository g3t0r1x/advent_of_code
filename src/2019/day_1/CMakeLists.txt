cmake_minimum_required(VERSION 3.8)

set(This_lib 2019_day1_lib)
set(This_bin 2019_day1_bin)

set(Headers
    FuelCounterUpper.hpp
    Interpreter.hpp
    impl/Converter.hpp
    impl/Fuel.hpp
    impl/Module.hpp
)

set(Sources_lib
    FuelCounterUpper.cpp
    impl/Converter.cpp
)

set(Sources_bin
    ${Sources_lib}
    main.cpp
)

add_library(${This_lib} STATIC ${Sources_lib} ${Headers})
target_link_libraries(${This_lib} PUBLIC SrcFiles)

add_executable(${This_bin} ${Sources_bin})
target_link_libraries(${This_bin} PUBLIC SrcFiles)
