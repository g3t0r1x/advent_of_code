/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2019__DAY_1__IMPL__COVERTER_HPP__
#define __SRC__2019__DAY_1__IMPL__COVERTER_HPP__

#include "Fuel.hpp"
#include "Module.hpp"

#include "utils/logger/Logger.hpp"

namespace impl
{

class Converter
{
public:
    Converter();

    Fuel invoke(const Module& module) const;

private:
    Logger logger_;
};

} // namespace impl

#endif // __SRC__2019__DAY_1__IMPL__COVERTER_HPP__
