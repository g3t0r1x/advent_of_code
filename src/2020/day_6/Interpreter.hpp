/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_6__INTERPRETER_HPP__
#define __SRC__2020__DAY_6__INTERPRETER_HPP__

#include "utils/file_parser/Interpreter.hpp"

namespace year2020_day6
{

class Interpreter : public fileparser::Interpreter<std::string>
{
public:
    std::vector<std::string> invokeFor(const std::string& line) const override
    {
        return { line };
    };
};

} // namespace year2020_day6

#endif // __SRC__2020__DAY_6__INTERPRETER_HPP__
