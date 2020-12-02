/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_2__UT__PASSWORDDATATESTUTILS_HPP__
#define __TESTS__2020__DAY_2__UT__PASSWORDDATATESTUTILS_HPP__

#include <ostream>
#include <tuple>

#include "2020/day_2/PasswordData.hpp"

namespace year2020_day2
{
namespace password
{

inline bool operator== (const Policy& lhs, const Policy& rhs)
{
    return std::tie(lhs.num1, lhs.num2, lhs.letter) == std::tie(rhs.num1, rhs.num2, rhs.letter);
}

inline bool operator== (const Data& lhs, const Data& rhs)
{
    return std::tie(lhs.policy, lhs.password) == std::tie(rhs.policy, rhs.password);
}

inline std::ostream& operator<<(std::ostream& os, const Data& data)
{
    return os << "password::Data{ password::Policy{ "
        << data.policy.num1 << ", " << data.policy.num2 << ", " << data.policy.letter << " }, " << data.password << " }";
}

} // namespace password
} // namespace year2020_day2

#endif // __TESTS__2020__DAY_2__UT__PASSWORDDATATESTUTILS_HPP__
