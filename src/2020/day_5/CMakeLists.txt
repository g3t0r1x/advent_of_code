cmake_minimum_required(VERSION 3.8)

set(This_lib 2020_day5_lib)
set(This_bin 2020_day5_bin)

set(Headers
    BinarySpacePartitioning.hpp
    BisectData.hpp
    HighestId.hpp
    Interpreter.hpp
    MissingTicketLeftNeighbour.hpp
    Seat.hpp
)

set(Sources_lib
    BinarySpacePartitioning.cpp
    BisectData.cpp
    Seat.cpp
)

set(Sources_bin
    ${Sources_lib}
    main.cpp
)

add_library(${This_lib} STATIC ${Sources_lib} ${Headers})
target_link_libraries(${This_lib} PUBLIC SrcFiles)

add_executable(${This_bin} ${Sources_bin})
target_link_libraries(${This_bin} PUBLIC SrcFiles)
