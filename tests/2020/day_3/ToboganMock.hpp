/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_3__UT__TOBOGANMOCK_HPP__
#define __TESTS__2020__DAY_3__UT__TOBOGANMOCK_HPP__

#include <memory>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_3/ITobogan.hpp"
#include "2020/day_3/squares/Empty.hpp"
#include "2020/day_3/squares/Tree.hpp"

namespace year2020_day3
{
namespace ut
{

class ToboganMock : public ITobogan
{
public:
    MOCK_METHOD(void, reset, (const Coords& position), (override));
    MOCK_METHOD(Coords, position, (), (const, override));
    MOCK_METHOD(void, move, (const Coords& slope), (override));
    MOCK_METHOD(void, encounter, (const squares::Empty& empty), (override));
    MOCK_METHOD(void, encounter, (const squares::Tree& tree), (override));
    MOCK_METHOD(uint64_t, encounters, (), (override));
};

using ToboganStrictMock = ::testing::StrictMock<ToboganMock>;
using ToboganStrictMockPtr = std::shared_ptr<ToboganStrictMock>;

} // namespace ut
} // namespace year2020_day3

#endif // __TESTS__2020__DAY_3__UT__TOBOGANMOCK_HPP__
