/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Position.hpp"

#include <algorithm>

namespace year2020_day2
{
namespace strategies
{

bool Position::isValid(const password::Data& data)
{
    int idx_1 = data.policy.num1 - 1;
    int idx_2 = data.policy.num2 - 1;

    return (data.password[idx_1] == data.policy.letter) ^ (data.password[idx_2] == data.policy.letter);
}

} // namespace strategies
} // namespace year2020_day2
