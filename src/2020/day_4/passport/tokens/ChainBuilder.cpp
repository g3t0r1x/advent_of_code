/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "ChainBuilder.hpp"

namespace year2020_day4
{
namespace passport
{
namespace tokens
{


ChainBuilder& ChainBuilder::withToken(TokenPtr token)
{
    if (tokens_.empty())
    {
        tokens_.push_back(token);
        return *this;
    }

    auto prev = tokens_.back();
    prev->setNext(token);
    tokens_.push_back(token);
    return *this;
}

ChainBuilder::operator TokenPtr()
{
    return tokens_.front();
}

} // namespace tokens
} // namespace passport
} // namespace year2020_day4
