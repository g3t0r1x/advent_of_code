/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_2__UT__PASSWORDSFIXTURE_HPP__
#define __TESTS__2020__DAY_2__UT__PASSWORDSFIXTURE_HPP__

#include <vector>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_2/Passwords.hpp"

namespace year2020_day2
{
namespace ut
{

class PasswordsShould : public ::testing::TestWithParam<password::Data>
{
public:
    PasswordsShould() = default;

    void createSut(const std::vector<password::Data>& passwords)
    {
        sut_ = std::make_unique<Passwords>(passwords);
    }

protected:
    std::unique_ptr<Passwords> sut_;
};

} // namespace ut
} // namespace year2020_day2

#endif // __TESTS__2020__DAY_2__UT__PASSWORDSFIXTURE_HPP__
