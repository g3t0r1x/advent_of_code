/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Geology.hpp"

namespace year2020_day3
{

Geology::Geology(MapPtr map, ToboganPtr tobogan)
    : map_(map)
    , tobogan_(tobogan)
    , logger_("Geology")
{
}

uint64_t Geology::moveToboggan(const Coords& slope)
{
    while (map_->inBounds(tobogan_->position()))
    {
        logger_ << debug << "Current tobogan position: " << tobogan_->position();
        map_->put(tobogan_);
        tobogan_->move(slope);
    }

    return tobogan_->encounters();
}

} // namespace year2020_day3
