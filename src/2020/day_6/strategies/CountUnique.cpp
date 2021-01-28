/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "CountUnique.hpp"

namespace year2020_day6
{
namespace strategies
{

CountingStrategyPtr CountUnique::with(const std::map<char, uint64_t>& data)
{
    data_ = data;
    return shared_from_this();
}

CountingStrategyPtr CountUnique::with(const uint64_t respondents)
{
    return shared_from_this();
}

uint64_t CountUnique::count() const
{
    return data_.size();
}

} // namespace strategies
} // namespace year2020_day6
