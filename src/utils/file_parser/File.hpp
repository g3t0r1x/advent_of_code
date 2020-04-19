/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__UTILS__FILE_PARSER__FILE_HPP__
#define __SRC__UTILS__FILE_PARSER__FILE_HPP__

#include <fstream>
#include <string>
#include <vector>

#include "Interpreter.hpp"

namespace fileparser
{

class File
{
public:
    File(const std::string& filename)
        : inFile_(filename)
    {
    }

    template <class T>
    std::vector<T> interpret_with(const Interpreter<T>& interpreter)
    {
        if (!inFile_)
        {
            inFile_.close();
            throw std::runtime_error("File does not exist!");
        }

        std::string line;
        std::vector<T> vec;

        while(getline(inFile_, line))
        {
            vec.push_back(interpreter.invokeFor(line));
        }

        return vec;
    }

    ~File()
    {
        inFile_.close();
    }

private:
    std::ifstream inFile_;
};

} // namespace fileparser

#endif // __SRC__UTILS__FILE_PARSER__FILE_HPP__
