/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2019__DAY_1__FUELCOUNTERUPPERFIXTURE_HPP__
#define __TESTS__2019__DAY_1__FUELCOUNTERUPPERFIXTURE_HPP__

#include <tuple>
#include <vector>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2019/day_1/FuelCounterUpper.hpp"

namespace year2019_day1
{
namespace ut
{

using MassesVec = std::vector<uint64_t>;
using TotalFuel = uint64_t;

class FuelCounterUpperShould : public ::testing::TestWithParam<std::tuple<MassesVec, TotalFuel>>
{
public:
    FuelCounterUpperShould()
        : sut_()
    {
    }

protected:
    FuelCounterUpper sut_;
};

} // namespace ut
} // namespace year2019_day1

#endif // __TESTS__2019__DAY_1__FUELCOUNTERUPPERFIXTURE_HPP__
