/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "BinarySpacePartitioning.hpp"

namespace year2020_day5
{

BinarySpacePartitioning::BinarySpacePartitioning(const std::vector<std::string>& boardingPasses)
{
    for (const auto boardingPass : boardingPasses)
    {
        seats_.push_back(Seat(boardingPass));
    }
}

Seats BinarySpacePartitioning::getSeats() const
{
    return seats_;
}

} // namespace year2020_day5
