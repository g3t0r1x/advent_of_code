/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_6__COUNTREPEATED_HPP__
#define __SRC__2020__DAY_6__COUNTREPEATED_HPP__

#include "../ICountingStrategy.hpp"

namespace year2020_day6
{
namespace strategies
{

class CountRepeated : public ICountingStrategy, public std::enable_shared_from_this<CountRepeated>
{
public:
    CountingStrategyPtr with(const std::map<char, uint64_t>& data) override;
    CountingStrategyPtr with(const uint64_t respondents) override;
    uint64_t count() const override;

private:
    std::map<char, uint64_t> data_;
    uint64_t respondents_;
};

} // namespace strategies
} // namespace year2020_day6

#endif // __SRC__2020__DAY_6__COUNTREPEATED_HPP__
