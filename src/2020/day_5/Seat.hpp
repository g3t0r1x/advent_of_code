/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_5__SEAT_HPP__
#define __SRC__2020__DAY_5__SEAT_HPP__

#include <string>
#include <utility>
#include <vector>

namespace year2020_day5
{

class Seat
{
public:
    explicit Seat(const std::string& boardingPass);

    uint64_t row() const;
    uint64_t column() const;
    uint64_t id() const;

private:
    std::pair<uint64_t, uint64_t> bisect(const std::string& boardingPass);

    uint64_t row_;
    uint64_t column_;
};



using Seats = std::vector<Seat>;

} // namespace year2020_day5

#endif // __SRC__2020__DAY_5__SEAT_HPP__
