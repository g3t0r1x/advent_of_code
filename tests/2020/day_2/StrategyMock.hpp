/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_2__UT__STRATEGYMOCK_HPP__
#define __TESTS__2020__DAY_2__UT__STRATEGYMOCK_HPP__

#include <memory>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_2/IStrategy.hpp"

namespace year2020_day2
{
namespace ut
{

using Input = std::string;
using ExpectedResult = std::vector<password::Data>;

class StrategyMock : public IStrategy
{
public:
    MOCK_METHOD(bool, isValid, (const password::Data& data), (override));
};

using StrategyStrictMock = ::testing::StrictMock<StrategyMock>;
using StrategyStrictMockPtr = std::unique_ptr<StrategyStrictMock>;

} // namespace ut
} // namespace year2020_day2

#endif // __TESTS__2020__DAY_2__UT__STRATEGYMOCK_HPP__
