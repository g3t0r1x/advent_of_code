/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_2__INTERPRETER_HPP__
#define __SRC__2020__DAY_2__INTERPRETER_HPP__

#include <sstream>

#include "PasswordData.hpp"
#include "utils/file_parser/Interpreter.hpp"

namespace year2020_day2
{

class Interpreter : public fileparser::Interpreter<password::Data>
{
public:
    std::vector<password::Data> invokeFor(const std::string& line) const override
    {
        std::stringstream ss(line);
        int min, max;
        char dash, letter, colon;
        std::string password;

        ss >> min >> dash >> max >> letter >> colon >> password;

        return { password::Data{ password::Policy{ min, max, letter }, password } };
    };
};

} // namespace year2020_day2

#endif // __SRC__2020__DAY_2__INTERPRETER_HPP__
