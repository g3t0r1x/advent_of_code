/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_3__UT__GEOLOGYFIXTURE_HPP__
#define __TESTS__2020__DAY_3__UT__GEOLOGYFIXTURE_HPP__

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_3/Geology.hpp"
#include "MapMock.hpp"
#include "ToboganMock.hpp"

namespace year2020_day3
{
namespace ut
{

class GeologyShould : public ::testing::Test
{
public:
    GeologyShould()
        : map_(std::make_shared<MapStrictMock>())
        , tobogan_(std::make_shared<ToboganStrictMock>())
        , sut_(map_, tobogan_)
    {
    }

protected:
    MapStrictMockPtr map_;
    ToboganStrictMockPtr tobogan_;
    Geology sut_;
};

} // namespace ut
} // namespace year2020_day3

#endif // __TESTS__2020__DAY_3__UT__GEOLOGYFIXTURE_HPP__
