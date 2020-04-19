/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__UTILS__FILE_PARSER__INTERPRETER_HPP__
#define __SRC__UTILS__FILE_PARSER__INTERPRETER_HPP__

#include <string>

namespace fileparser
{

template <class T>
class Interpreter
{
public:
    virtual ~Interpreter() = default;
    virtual T invokeFor(const std::string& line) const = 0;
};


} // namespace fileparser

#endif // __SRC__UTILS__FILE_PARSER__INTERPRETER_HPP__
