/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "ExpensesReport.hpp"
#include "Interpreter.hpp"
#include "utils/file_parser/File.hpp"
#include "utils/logger/Logger.hpp"

Logger logger("main");

int main()
{
    try
    {
        const auto input = fileparser::File("./src/2020/day_1/input.txt").interpret_with(year2020_day1::Interpreter());

        {
            logger << info << "Solving 2020 day 1, part 1...";
            const auto& [entry_1, entry_2] = year2020_day1::ExpensesReport(input).findTwoEntriesSumingTo(2020);
            logger << answer << "2020 day1, part 1: " << entry_1 << " * " << entry_2 << " = " << entry_1 * entry_2;
        }

        {
            logger << info << "Solving 2020 day 1, part 2...";
            const auto& [entry_1, entry_2, entry_3] = year2020_day1::ExpensesReport(input).findThreeEntriesSumingTo(2020);
            logger << answer << "2020 day1, part 2: " << entry_1 << " * " << entry_2 << " * " << entry_3 << " = " << entry_1 * entry_2 * entry_3;
        }

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
