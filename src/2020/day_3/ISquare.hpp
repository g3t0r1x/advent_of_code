/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__ISQUARE_HPP__
#define __SRC__2020__DAY_3__ISQUARE_HPP__

#include <memory>

#include "ITobogan.hpp"

namespace year2020_day3
{

class ISquare
{
public:
    virtual ~ISquare() = default;
    virtual void put(ToboganPtr tobogan) = 0;
};

using SquarePtr = std::unique_ptr<ISquare>;

} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__ISQUARE_HPP__
