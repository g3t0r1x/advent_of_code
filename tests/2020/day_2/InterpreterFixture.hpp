/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_2__UT__INTERPRETERFIXTURE_HPP__
#define __TESTS__2020__DAY_2__UT__INTERPRETERFIXTURE_HPP__

#include <string>
#include <tuple>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_2/Interpreter.hpp"

namespace year2020_day2
{
namespace ut
{

using Input = std::string;
using ExpectedResult = std::vector<password::Data>;

class InterpreterShould : public ::testing::TestWithParam<std::tuple<Input, ExpectedResult>>
{
public:
    InterpreterShould() = default;

protected:
    Interpreter sut_;
};

} // namespace ut
} // namespace year2020_day2

#endif // __TESTS__2020__DAY_2__UT__INTERPRETERFIXTURE_HPP__
