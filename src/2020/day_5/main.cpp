/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include <algorithm>

#include "BinarySpacePartitioning.hpp"
#include "HighestId.hpp"
#include "Interpreter.hpp"
#include "MissingTicketLeftNeighbour.hpp"
#include "utils/file_parser/File.hpp"
#include "utils/logger/Logger.hpp"

Logger logger("main");

int main()
{
    try
    {
        const auto input = fileparser::File("./src/2020/day_5/input.txt").interpret_with(year2020_day5::Interpreter());
        auto seats = year2020_day5::BinarySpacePartitioning(input).getSeats();

        logger << info << "Solving 2020 day 5, part 1...";
        std::sort(seats.begin(), seats.end(), year2020_day5::HighestId());
        logger << answer << "2020 day5, part 1: highest id: " << seats.back().id();

        logger << info << "Solving 2020 day 5, part 2...";
        const auto iter = std::adjacent_find(seats.cbegin(), seats.cend(), year2020_day5::MissingTicketLeftNeighbour());
        logger << answer << "2020 day5, part 2: my seat: " << iter->id() + 1;

        return 0;
    }
    catch (const std::exception& ex)
    {
        logger << error << "Exception caught: " << ex.what();
        return 1;
    }
    catch (...)
    {
        logger << error << "Unhandled exception occured.";
        return 2;
    }
}
