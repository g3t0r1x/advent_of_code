/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Batch.hpp"
#include "Interpreter.hpp"
#include "passport/Scanner.hpp"
#include "utils/file_parser/File.hpp"
#include "utils/logger/Logger.hpp"

Logger logger("main");

int main()
{
    try
    {
        const auto input = fileparser::File("./src/2020/day_4/input.txt").interpret_with(year2020_day4::Interpreter());
        const auto passports = year2020_day4::Batch(input).convertToPassports();

        logger << info << "Solving 2020 day 4, part 1...";
        logger << answer << "2020 day4, part 1: Valid passports: " << year2020_day4::passport::Scanner().prevalidate(passports);

        logger << info << "Solving 2020 day 4, part 2...";
        logger << answer << "2020 day4, part 2: Valid passports: " << year2020_day4::passport::Scanner().validate(passports);

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
