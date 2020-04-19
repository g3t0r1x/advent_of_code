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
    logger_ << debug << "Converting mass: " << module.mass;
    int64_t calculated = module.mass / 3 - 2;
    uint64_t value = calculated > 0 ? calculated : 0;

    logger_ << debug << "Returning fuel: " << value;
    return Fuel{value};
}

} // namespace impl
} // namespace year2019_day1
