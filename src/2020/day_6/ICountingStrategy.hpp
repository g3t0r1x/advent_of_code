/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_6__ICOUNTINGSTRATEGY_HPP__
#define __SRC__2020__DAY_6__ICOUNTINGSTRATEGY_HPP__

#include <map>
#include <memory>

namespace year2020_day6
{

class ICountingStrategy
{
public:
    virtual ~ICountingStrategy() = default;
    virtual std::shared_ptr<ICountingStrategy> with(const std::map<char, uint64_t>& data) = 0;
    virtual std::shared_ptr<ICountingStrategy> with(const uint64_t respondents) = 0;
    virtual uint64_t count() const = 0;
};

using CountingStrategyPtr = std::shared_ptr<ICountingStrategy>;

} // namespace year2020_day6

#endif // __SRC__2020__DAY_6__ICOUNTINGSTRATEGY_HPP__
