/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2019__DAY_1__IMPL__CONVERTERFIXTURE_HPP__
#define __TESTS__2019__DAY_1__IMPL__CONVERTERFIXTURE_HPP__

#include <tuple>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2019/day_1/impl/Converter.hpp"

namespace year2019_day1
{
namespace impl
{
namespace ut
{

class ForProvidedModule : public ::testing::TestWithParam<std::tuple<Module, Fuel>>
{
public:
    ForProvidedModule()
        : sut_()
    {
    }

protected:
    Converter sut_;
};

} // namespace ut
} // namespace impl
} // namespace year2019_day1

#endif // __TESTS__2019__DAY_1__IMPL__CONVERTERFIXTURE_HPP__
