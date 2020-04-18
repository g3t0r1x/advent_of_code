/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include <ostream>
#include "2019/day_1/Fuel.hpp"

inline bool operator== (const Fuel lhs, const Fuel rhs)
{
    return lhs.value == rhs.value;
}

std::ostream& operator<<(std::ostream& os, const Fuel& fuel)
{
    return os << "Fuel{" << fuel.value << "}";
}
