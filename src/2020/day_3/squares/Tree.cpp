/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Tree.hpp"

namespace year2020_day3
{
namespace squares
{

void Tree::put(ToboganPtr tobogan)
{
    tobogan->encounter(*this);
}

} // namespace squares
} // namespace year2020_day3
