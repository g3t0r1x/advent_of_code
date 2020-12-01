cmake_minimum_required(VERSION 3.8)

set(This 2020_day1_tests)

set(Headers
    ExpensesReportFixture.hpp
)

set(Sources
    ExpensesReportTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gmock_main
    gtest_main
    2020_day1_lib
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
