/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2019__DAY_1__EQUATIONDOUBLECHECKERFIXTURE_HPP__
#define __TESTS__2019__DAY_1__EQUATIONDOUBLECHECKERFIXTURE_HPP__

#include <tuple>
#include <vector>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2019/day_1/EquationDoubleChecker.hpp"

namespace year2019_day1
{
namespace ut
{

using MassesVec = std::vector<uint64_t>;
using TotalFuel = uint64_t;

class EquationDoubleCheckerShould : public ::testing::TestWithParam<std::tuple<MassesVec, TotalFuel>>
{
public:
    EquationDoubleCheckerShould()
        : sut_()
    {
    }

protected:
    EquationDoubleChecker sut_;
};

} // namespace ut
} // namespace year2019_day1

#endif // __TESTS__2019__DAY_1__EQUATIONDOUBLECHECKERFIXTURE_HPP__
