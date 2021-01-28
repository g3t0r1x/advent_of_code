/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "BisectData.hpp"

#include <stdexcept>

namespace year2020_day5
{

BisectData::BisectData(const uint64_t max)
    : min_(0)
    , max_(max - 1)
{
}

void BisectData::low()
{
    max_ -= size() / 2;
}

void BisectData::high()
{
    min_ += size() / 2;
}

BisectData::operator uint64_t()
{
    if (max_ != min_)
    {
        throw std::runtime_error("Bisection does not returned single element! Check your algorithm.");
    }

    return max_;
}

uint64_t BisectData::size()
{
    return max_ - min_ + 1;
}

} // namespace year2020_day5
