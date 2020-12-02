/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "MinMax.hpp"

#include <algorithm>

namespace year2020_day2
{
namespace strategies
{

bool MinMax::isValid(const password::Data& data)
{
    auto occurrence = std::count(data.password.cbegin(), data.password.cend(), data.policy.letter);
    return occurrence >= data.policy.num1 && occurrence <= data.policy.num2;
}

} // namespace strategies
} // namespace year2020_day2
