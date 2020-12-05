/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__COORDS_HPP__
#define __SRC__2020__DAY_3__COORDS_HPP__

#include <ostream>

namespace year2020_day3
{

struct Coords
{
    uint64_t x;
    uint64_t y;

    Coords& operator+= (const Coords& other)
    {
        x += other.x;
        y += other.y;
        return *this;
    }

    bool operator<(const Coords& other) const
    {
        return x < other.x || (x == other.x && y < other.y);
    }

    friend std::ostream& operator<< (std::ostream& os, const Coords& coords)
    {
        return os << coords.x << ", " << coords.y;
    }
};

} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__COORDS_HPP__
