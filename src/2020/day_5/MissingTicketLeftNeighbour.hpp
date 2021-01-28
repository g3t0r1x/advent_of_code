/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_5__MISSINGTICKETLEFTNEIGHBOUR_HPP__
#define __SRC__2020__DAY_5__MISSINGTICKETLEFTNEIGHBOUR_HPP__

#include "Seat.hpp"

namespace year2020_day5
{

struct MissingTicketLeftNeighbour
{
public:
    bool operator() (const Seat& rhs, const Seat& lhs)
    {
        return (lhs.id() - rhs.id()) != 1;
    }
};

} // namespace year2020_day5

#endif // __SRC__2020__DAY_5__MISSINGTICKETLEFTNEIGHBOUR_HPP__
