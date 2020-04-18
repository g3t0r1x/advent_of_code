/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2019__DAY_1__MODULE_HPP__
#define __SRC__2019__DAY_1__MODULE_HPP__

#include "Fuel.hpp"
#include "logger/Logger.hpp"

class Module
{
public:
    explicit Module(const uint64_t mass);

    Fuel getRequiredFuel();

private:
    uint64_t mass_;
    Logger logger_;
};

#endif // __SRC__2019__DAY_1__MODULE_HPP__
