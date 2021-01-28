/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Groups.hpp"
#include "Interpreter.hpp"
#include "strategies/CountRepeated.hpp"
#include "strategies/CountUnique.hpp"
#include "utils/file_parser/File.hpp"
#include "utils/logger/Logger.hpp"

Logger logger("main");

int main()
{
    try
    {
        const auto input = fileparser::File("./src/2020/day_6/input.txt").interpret_with(year2020_day6::Interpreter());
        const auto groups = year2020_day6::Groups(input);

        logger << info << "Solving 2020 day 6, part 1...";
        const auto unique = std::make_shared<year2020_day6::strategies::CountUnique>();
        logger << answer << "2020 day6, part 1: answered any 'yes' questions: " << groups.countQuestions(unique);

        logger << info << "Solving 2020 day 6, part 2...";
        const auto repeated = std::make_shared<year2020_day6::strategies::CountRepeated>();
        logger << answer << "2020 day6, part 1: answered all 'yes' questions: " << groups.countQuestions(repeated);

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
