/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__UTILS__STRING_EXT__SPLITBY_HPP__
#define __SRC__UTILS__STRING_EXT__SPLITBY_HPP__

#include <string>
#include <vector>

namespace string_ext
{

using Tokens = std::vector<std::string>;

template <typename DelimiterT>
class SplitBy
{
public:
    explicit SplitBy(const std::string& s)
    {
        std::string token;

        for (const char letter : s)
        {
            if (DelimiterT::contains(letter))
            {
                push(token);
                token.clear();
                continue;
            }

            token += letter;
        }

        push(token);
    }

    operator Tokens()
    {
        return tokens_;
    }

private:
    void push(const std::string& token)
    {
        if (not token.empty())
        {
            tokens_.push_back(token);
        }
    }

    Tokens tokens_;
};

} // namespace string_ext

#endif // __SRC__UTILS__STRING_EXT__SPLITBY_HPP__
