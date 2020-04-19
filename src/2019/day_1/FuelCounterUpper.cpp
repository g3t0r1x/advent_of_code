/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "FuelCounterUpper.hpp"

#include <numeric>

namespace year2019_day1
{

FuelCounterUpper::FuelCounterUpper()
    : converter_()
    , logger_("FuelCounterUpper")
{
}

uint64_t FuelCounterUpper::calculate(const std::vector<uint64_t>& masses)
{
    uint64_t sum = std::accumulate(std::cbegin(masses), std::cend(masses), 0,
        [this](const auto& sum, const auto& mass)
        {
            logger_ << info << "Starting conversion for module with total mass: " << mass;
            const auto fuel = converter_.invoke(impl::Module{mass});
            return sum + fuel.value;
        });

    logger_ << answer << "Total fuel required: " << sum;
    return sum;
}

} // namespace year2019_day1
