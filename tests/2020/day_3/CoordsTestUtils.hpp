/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_3__UT__COORDSTESTUTILS_HPP__
#define __TESTS__2020__DAY_3__UT__COORDSTESTUTILS_HPP__

#include <ostream>
#include <tuple>

#include "2020/day_3/Coords.hpp"

namespace year2020_day3
{

inline bool operator== (const Coords& lhs, const Coords& rhs)
{
    return std::tie(lhs.x, lhs.y) == std::tie(rhs.x, rhs.y);
}

} // namespace year2020_day3

#endif // __TESTS__2020__DAY_3__UT__COORDSTESTUTILS_HPP__
