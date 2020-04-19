/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Converter.hpp"

namespace year2019_day1
{
namespace impl
{

Converter::Converter()
    : logger_("Converter")
{
}

Fuel Converter::invoke(const Module& module) const
{
    logger_ << info << "Converting mass: " << module.mass;
    uint64_t value = module.mass / 3 - 2;

    logger_ << info << "Returning fuel: " << value;
    return Fuel{value};
}

} // namespace impl
} // namespace year2019_day1
