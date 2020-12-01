/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_1__INTERPRETER_HPP__
#define __SRC__2020__DAY_1__INTERPRETER_HPP__

#include "utils/file_parser/Interpreter.hpp"

namespace year2020_day1
{

class Interpreter : public fileparser::Interpreter<uint64_t>
{
public:
    std::vector<uint64_t> invokeFor(const std::string& line) const override
    {
        return {std::stoul(line)};
    };
};

} // namespace year2020_day1

#endif // __SRC__2020__DAY_1__INTERPRETER_HPP__
