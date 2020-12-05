/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Empty.hpp"

namespace year2020_day3
{
namespace squares
{

void Empty::put(ToboganPtr tobogan)
{
    tobogan->encounter(*this);
}

} // namespace squares
} // namespace year2020_day3
