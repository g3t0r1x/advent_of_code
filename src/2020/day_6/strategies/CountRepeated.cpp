/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "CountRepeated.hpp"

#include <algorithm>

namespace year2020_day6
{
namespace strategies
{

CountingStrategyPtr CountRepeated::with(const std::map<char, uint64_t>& data)
{
    data_ = data;
    return shared_from_this();
}

CountingStrategyPtr CountRepeated::with(const uint64_t respondents)
{
    respondents_ = respondents;
    return shared_from_this();
}

uint64_t CountRepeated::count() const
{
    return std::count_if(data_.cbegin(), data_.cend(),
        [this](const auto& entry)
        {
            return entry.second == respondents_;
        });
}

} // namespace strategies
} // namespace year2020_day6
