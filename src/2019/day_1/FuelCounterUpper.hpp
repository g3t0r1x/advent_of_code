/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2019__DAY_1__FUELCOUNTERUPPER_HPP__
#define __SRC__2019__DAY_1__FUELCOUNTERUPPER_HPP__

#include <vector>

#include "impl/Converter.hpp"

#include "utils/logger/Logger.hpp"

namespace year2019_day1
{

class FuelCounterUpper
{
public:
    FuelCounterUpper();
    uint64_t calculate(const std::vector<uint64_t>& masses);

private:
    impl::Converter converter_;
    Logger logger_;
};

} // namespace year2019_day1

#endif // __SRC__2019__DAY_1__FUELCOUNTERUPPER_HPP__
