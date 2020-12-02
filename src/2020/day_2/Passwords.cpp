/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Passwords.hpp"

#include <algorithm>
#include <exception>

namespace year2020_day2
{

Passwords::Passwords(const std::vector<password::Data>& passwords)
    : passwords_(passwords)
    , logger_("Passwords")
{
}

void Passwords::setStrategy(StrategyPtr strategy)
{
    strategy_ = strategy;
}

uint64_t Passwords::countValid()
{
    if (!strategy_)
    {
        throw std::runtime_error("Password counting strategy is not set!");
    }

    return std::count_if(passwords_.cbegin(), passwords_.cend(),
        [this](const auto& data)
        {
            return strategy_->isValid(data);
        });
}

} // namespace year2020_day2
