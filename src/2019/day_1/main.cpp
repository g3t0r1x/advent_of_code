/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "EquationDoubleChecker.hpp"
#include "FuelCounterUpper.hpp"
#include "Interpreter.hpp"
#include "utils/file_parser/File.hpp"
#include "utils/logger/Logger.hpp"

Logger logger("main");

int main()
{
    try
    {
        const auto masses = fileparser::File("./src/2019/day_1/input.txt").interpret_with(year2019_day1::Interpreter());

        logger << info << "Solving 2019 day 1, part 1...";
        year2019_day1::FuelCounterUpper().calculate(masses);

        logger << info << "Solving 2019 day 1, part 2...";
        year2019_day1::EquationDoubleChecker().calculate(masses);

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