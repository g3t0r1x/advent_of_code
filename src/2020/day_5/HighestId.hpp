/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_5__HIGHESTID_HPP__
#define __SRC__2020__DAY_5__HIGHESTID_HPP__

#include "Seat.hpp"

namespace year2020_day5
{

struct HighestId
{
public:
    bool operator() (const Seat& rhs, const Seat& lhs)
    {
        return rhs.id() < lhs.id();
    }
};

} // namespace year2020_day5

#endif // __SRC__2020__DAY_5__HIGHESTID_HPP__
