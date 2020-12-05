/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Tobogan.hpp"

namespace year2020_day3
{

Tobogan::Tobogan(const Coords& position)
    : position_(position)
    , encounters_(0)
    , logger_("Tobogan")
{
}

void Tobogan::reset(const Coords& position)
{
    position_ = position;
    encounters_ = 0;
}

Coords Tobogan::position() const
{
    return position_;
}

void Tobogan::move(const Coords& slope)
{
    position_ += slope;
}

void Tobogan::encounter(const squares::Empty& empty)
{
    logger_ << debug << "Found empty square!";
}

void Tobogan::encounter(const squares::Tree& tree)
{
    logger_ << debug << "Found tree, yay!";
    encounters_++;
}

uint64_t Tobogan::encounters()
{
    return encounters_;
}

} // namespace year2020_day3
