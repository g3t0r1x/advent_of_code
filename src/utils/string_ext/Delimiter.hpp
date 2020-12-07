/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__UTILS__STRING_EXT__DELIMITER_HPP__
#define __SRC__UTILS__STRING_EXT__DELIMITER_HPP__

#include <string>

namespace string_ext
{

template <char LETTER>
struct Delimiter
{
    static bool contains(const char arg)
    {
        return LETTER == arg;
    }
};

} // namespace string_ext

#endif // __SRC__UTILS__STRING_EXT__DELIMITER_HPP__
