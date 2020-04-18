/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Fuel.hpp"

Fuel::Fuel(const uint64_t mass)
    : logger_("Fuel")
{
    value_ = mass / 3 - 2;
    logger_ << info << "Mass: " << mass << " requires " << value_ << " fuel.";
}