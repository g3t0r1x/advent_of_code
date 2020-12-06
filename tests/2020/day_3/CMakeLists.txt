cmake_minimum_required(VERSION 3.8)

set(This 2020_day3_tests)

set(Headers
    CoordsTestUtils.hpp
    GeologyFixture.hpp
    MapMock.hpp
    ToboganFixture.hpp
    ToboganMock.hpp
)

set(Sources
    GeologyTests.cpp
    ToboganTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gmock_main
    gtest_main
    2020_day3_lib
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
