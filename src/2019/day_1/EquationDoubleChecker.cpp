/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "EquationDoubleChecker.hpp"

#include <numeric>

namespace year2019_day1
{

EquationDoubleChecker::EquationDoubleChecker()
    : converter_()
    , logger_("EquationDoubleChecker")
{
}

uint64_t EquationDoubleChecker::calculate(const std::vector<uint64_t>& masses)
{
    uint64_t sum = std::accumulate(std::cbegin(masses), std::cend(masses), 0,
        [this](const auto& partialSum, const auto& mass)
        {
            logger_ << info << "Starting conversion for module with total mass: " << mass;
            const auto fuel = calculateRecursively(mass);
            return partialSum + fuel.value;
        });

    logger_ << answer << "Total fuel required: " << sum;
    return sum;
}

impl::Fuel EquationDoubleChecker::calculateRecursively(uint64_t mass)
{
    impl::Fuel total{0};

    do
    {
        const auto fuel = converter_.invoke(impl::Module{mass});
        total += fuel;
        mass = fuel.value;
    } while (mass > 0);

    logger_ << debug << "Recursive calculation returned: " << total.value;

    return total;
}

} // namespace year2019_day1
