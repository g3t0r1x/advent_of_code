/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__GEOLOGY_HPP__
#define __SRC__2020__DAY_3__GEOLOGY_HPP__

#include <string>
#include <vector>

#include "ITobogan.hpp"
#include "IMap.hpp"

#include "utils/logger/Logger.hpp"

namespace year2020_day3
{

class Geology
{
public:
    explicit Geology(MapPtr map, ToboganPtr tobogan);

    uint64_t moveToboggan(const Coords& slope);

private:
    MapPtr map_;
    ToboganPtr tobogan_;
    Logger logger_;
};

} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__GEOLOGY_HPP__
