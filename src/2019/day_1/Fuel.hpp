/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2019__DAY_1__FUEL_HPP__
#define __SRC__2019__DAY_1__FUEL_HPP__

#include "logger/Logger.hpp"

class Fuel
{
public:
    explicit Fuel(const uint64_t mass);

private:
    uint64_t value_;
    Logger logger_;
};

#endif // __SRC__2019__DAY_1__FUEL_HPP__
