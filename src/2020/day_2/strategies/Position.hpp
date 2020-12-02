/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_2__STRATEGIES__POSITION_HPP__
#define __SRC__2020__DAY_2__STRATEGIES__POSITION_HPP__

#include "../IStrategy.hpp"

namespace year2020_day2
{
namespace strategies
{

class Position : public IStrategy
{
public:
    bool isValid(const password::Data& data) override;
};

} // namespace strategies
} // namespace year2020_day2

#endif // __SRC__2020__DAY_2__STRATEGIES__POSITION_HPP__
