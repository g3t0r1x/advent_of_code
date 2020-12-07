/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Geology.hpp"
#include "Interpreter.hpp"
#include "Map.hpp"
#include "Tobogan.hpp"
#include "utils/file_parser/File.hpp"
#include "utils/logger/Logger.hpp"

Logger logger("main");

int main()
{
    try
    {
        const auto input = fileparser::File("./src/2020/day_3/input.txt").interpret_with(year2020_day3::Interpreter());

        const auto map = std::make_shared<year2020_day3::Map>(input);
        const auto tobogan = std::make_shared<year2020_day3::Tobogan>(year2020_day3::Coords{0, 0});
        year2020_day3::Geology geology(map, tobogan);

        logger << info << "Solving 2020 day 3, part 1...";

        uint64_t run1 = geology.moveToboggan(year2020_day3::Coords{3, 1});
        logger << answer << "2020 day1, part 1: Found trees: " << run1;

        logger << info << "Solving 2020 day 3, part 2...";

        tobogan->reset(year2020_day3::Coords{0, 0});
        uint64_t run2 = geology.moveToboggan(year2020_day3::Coords{1, 1});

        tobogan->reset(year2020_day3::Coords{0, 0});
        uint64_t run3 = geology.moveToboggan(year2020_day3::Coords{5, 1});

        tobogan->reset(year2020_day3::Coords{0, 0});
        uint64_t run4 = geology.moveToboggan(year2020_day3::Coords{7, 1});

        tobogan->reset(year2020_day3::Coords{0, 0});
        uint64_t run5 = geology.moveToboggan(year2020_day3::Coords{1, 2});

        logger << info << "2020 day1, part 2: Found trees: " << run1 << ", " << run2 << ", " << run3 << ", " << run4 << ", " << run5;
        logger << answer << "2020 day1, part 2: Multiplied together: " << run1 * run2 * run3 * run4 * run5;

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
