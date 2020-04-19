/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "FuelCounterUpper.hpp"
#include "Interpreter.hpp"
#include "utils/file_parser/File.hpp"

int main()
{
    try
    {
        const auto masses = fileparser::File("./src/2019/day_1/input.txt").interpret_with(year2019_day1::Interpreter());
        year2019_day1::FuelCounterUpper().calculate(masses);
        return 0;
    }
    catch (const std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;
        return 1;
    }
    catch (...)
    {
        std::cerr << "Unexpected error occured" << std::endl;
        return 2;
    }
}