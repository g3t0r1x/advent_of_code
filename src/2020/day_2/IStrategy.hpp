/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_2__ISTRATEGY_HPP__
#define __SRC__2020__DAY_2__ISTRATEGY_HPP__

#include <memory>

#include "PasswordData.hpp"

namespace year2020_day2
{

class IStrategy
{
public:
    virtual ~IStrategy() = default;
    virtual bool isValid(const password::Data& data) = 0;
};

using StrategyPtr = std::shared_ptr<IStrategy>;

} // namespace year2020_day2

#endif // __SRC__2020__DAY_2__ISTRATEGY_HPP__
