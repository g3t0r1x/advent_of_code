/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Module.hpp"

Module::Module(const uint64_t mass)
    : mass_(mass)
    , logger_("Module")
{
}

Fuel Module::getRequiredFuel()
{
    logger_ << info << "Calculating required fuel for mass " << mass_;
    return Fuel{mass_};
}
