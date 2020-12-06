/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_3__UT__TOBOGANFIXTURE_HPP__
#define __TESTS__2020__DAY_3__UT__TOBOGANFIXTURE_HPP__

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_3/Tobogan.hpp"

namespace year2020_day3
{
namespace ut
{

class ToboganShould : public ::testing::Test
{
public:
    ToboganShould()
        : initialPosition_{0, 0}
        , sut_(initialPosition_)
    {
    }

protected:
    const Coords initialPosition_;
    Tobogan sut_;
};

} // namespace ut
} // namespace year2020_day3

#endif // __TESTS__2020__DAY_3__UT__TOBOGANFIXTURE_HPP__
