/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_3__UT__MAPMOCK_HPP__
#define __TESTS__2020__DAY_3__UT__MAPMOCK_HPP__

#include <memory>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_3/IMap.hpp"

namespace year2020_day3
{
namespace ut
{

class MapMock : public IMap
{
public:
    MOCK_METHOD(bool, inBounds, (const Coords& position), (const, override));
    MOCK_METHOD(void, put, (ToboganPtr tobogan), (override));
};

using MapStrictMock = ::testing::StrictMock<MapMock>;
using MapStrictMockPtr = std::shared_ptr<MapStrictMock>;

} // namespace ut
} // namespace year2020_day3

#endif // __TESTS__2020__DAY_3__UT__MAPMOCK_HPP__
