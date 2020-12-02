/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Interpreter.hpp"
#include "Passwords.hpp"
#include "strategies/MinMax.hpp"
#include "strategies/Position.hpp"
#include "utils/file_parser/File.hpp"
#include "utils/logger/Logger.hpp"

Logger logger("main");

int main()
{
    try
    {
        const auto input = fileparser::File("./src/2020/day_2/input.txt").interpret_with(year2020_day2::Interpreter());
        auto passwords = year2020_day2::Passwords(input);

        logger << info << "Solving 2020 day 2, part 1...";
        passwords.setStrategy(std::make_shared<year2020_day2::strategies::MinMax>());
        logger << answer << "2020 day1, part 1: " << passwords.countValid();

        logger << info << "Solving 2020 day 2, part 2...";
        passwords.setStrategy(std::make_shared<year2020_day2::strategies::Position>());
        logger << answer << "2020 day1, part 2: " << passwords.countValid();

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
