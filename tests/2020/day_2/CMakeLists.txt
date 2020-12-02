cmake_minimum_required(VERSION 3.8)

set(This 2020_day2_tests)

set(Headers
    InterpreterFixture.hpp
    PasswordDataTestUtils.hpp
    PasswordsFixture.hpp
    StrategyMock.hpp
    strategies/MinMaxFixture.hpp
    strategies/PositionFixture.hpp
)

set(Sources
    InterpreterTests.cpp
    PasswordsTests.cpp
    strategies/MinMaxTests.cpp
    strategies/PositionTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gmock_main
    gtest_main
    2020_day2_lib
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
