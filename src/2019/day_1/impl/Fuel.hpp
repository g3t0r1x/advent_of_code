/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2019__DAY_1__IMPL__FUEL_HPP__
#define __SRC__2019__DAY_1__IMPL__FUEL_HPP__

#include <cstdint>

namespace year2019_day1
{
namespace impl
{

struct Fuel
{
    uint64_t value;

    inline Fuel& operator+= (const Fuel& other)
    {
        value += other.value;
        return *this;
    }
};

} // namespace impl
} // namespace year2019_day1

#endif // __SRC__2019__DAY_1__IMPL__FUEL_HPP__
