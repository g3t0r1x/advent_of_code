/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__INTERPRETER_HPP__
#define __SRC__2020__DAY_4__INTERPRETER_HPP__

#include "utils/file_parser/Interpreter.hpp"
#include "utils/string_ext/SplitBy.hpp"
#include "utils/string_ext/Delimiter.hpp"

namespace year2020_day4
{

class Interpreter : public fileparser::Interpreter<std::string>
{
public:
    std::vector<std::string> invokeFor(const std::string& line) const override
    {
        return line.empty() ? std::vector<std::string>{ line } : string_ext::SplitBy<Space>(line);
    };

private:
    struct Space : string_ext::Delimiter<' '> {};
};

} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__INTERPRETER_HPP__
