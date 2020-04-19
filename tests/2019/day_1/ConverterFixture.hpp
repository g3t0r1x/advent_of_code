/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2019__DAY_1__CONVERTERFIXTURE_HPP__
#define __TESTS__2019__DAY_1__CONVERTERFIXTURE_HPP__

#include <tuple>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2019/day_1/impl/Converter.hpp"

namespace ut
{

class ForProvidedModule : public ::testing::TestWithParam<std::tuple<impl::Module, impl::Fuel>>
{
public:
    ForProvidedModule() : sut_()
    {
    }

protected:
    impl::Converter sut_;
};

} // namespace ut

#endif // __TESTS__2019__DAY_1__CONVERTERFIXTURE_HPP__
