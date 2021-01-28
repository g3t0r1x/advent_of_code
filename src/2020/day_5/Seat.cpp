/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Seat.hpp"

#include <tuple>

#include "BisectData.hpp"

namespace year2020_day5
{

Seat::Seat(const std::string& boardingPass)
{
    std::tie(row_, column_) = bisect(boardingPass);
}

std::pair<uint64_t, uint64_t> Seat::bisect(const std::string& boardingPass)
{
    auto rowData = BisectData(128);
    auto columnData = BisectData(8);

    for (const auto& symbol : boardingPass)
    {
        switch (symbol)
        {
            case 'F':
            {
                rowData.low();
                break;
            }
            case 'B':
            {
                rowData.high();
                break;
            }
            case 'R':
            {
                columnData.high();
                break;
            }
            case 'L':
            {
                columnData.low();
                break;
            }
        }
    }

    return {rowData, columnData};
}

uint64_t Seat::row() const
{
    return row_;
}

uint64_t Seat::column() const
{
    return column_;
}

uint64_t Seat::id() const
{
    return row_ * 8 + column_;
}

} // namespace year2020_day5
