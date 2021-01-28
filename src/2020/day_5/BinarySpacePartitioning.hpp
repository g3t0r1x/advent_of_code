/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_5__BINARYSPACEPARTITIONING_HPP__
#define __SRC__2020__DAY_5__BINARYSPACEPARTITIONING_HPP__

#include "Seat.hpp"
#include "utils/logger/Logger.hpp"

namespace year2020_day5
{

class BinarySpacePartitioning
{
public:
    explicit BinarySpacePartitioning(const std::vector<std::string>& boardingPasses);

    Seats getSeats() const;

private:
    Seats seats_;
    Logger logger_;
};

} // namespace year2020_day5

#endif // __SRC__2020__DAY_5__BINARYSPACEPARTITIONING_HPP__
