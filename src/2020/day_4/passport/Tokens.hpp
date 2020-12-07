/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_4__PASSPORT__TOKENS_HPP__
#define __SRC__2020__DAY_4__PASSPORT__TOKENS_HPP__

#include <memory>

#include "tokens/ChainBuilder.hpp"

namespace year2020_day4
{
namespace passport
{

class Tokens
{
public:
    static tokens::ChainBuilder makeChain()
    {
        tokens::ChainBuilder chainBuilder;
        return chainBuilder;
    }

    Tokens() = delete;
    Tokens(const Tokens& other) = delete;
    Tokens& operator= (const Tokens& other) = delete;
    Tokens(Tokens&& other) = delete;
    Tokens& operator= (Tokens&& other) = delete;
};

} // namespace passport
} // namespace year2020_day4

#endif // __SRC__2020__DAY_4__PASSPORT__TOKENS_HPP__
