/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_2__STRATEGIES__UT__POSITIONFIXTURE_HPP__
#define __TESTS__2020__DAY_2__STRATEGIES__UT__POSITIONFIXTURE_HPP__

#include <tuple>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_2/strategies/Position.hpp"

namespace year2020_day2
{
namespace strategies
{
namespace ut
{

using ExpectedResult = bool;

class PositionShould : public ::testing::TestWithParam<std::tuple<password::Data, ExpectedResult>>
{
public:
    PositionShould() = default;

protected:
    Position sut_;
};

} // namespace ut
} // namespace strategies
} // namespace year2020_day2

#endif // __TESTS__2020__DAY_2__STRATEGIES__UT__POSITIONFIXTURE_HPP__
