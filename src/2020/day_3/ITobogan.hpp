/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__ITOBOGAN_HPP__
#define __SRC__2020__DAY_3__ITOBOGAN_HPP__

#include <memory>

#include "Coords.hpp"

namespace year2020_day3
{
namespace squares
{

class Empty;
class Tree;

} // namespace squares

class ITobogan
{
public:
    virtual ~ITobogan() = default;
    virtual void reset(const Coords& position) = 0;
    virtual Coords position() const = 0;
    virtual void move(const Coords& slope) = 0;
    virtual void encounter(const squares::Empty& empty) = 0;
    virtual void encounter(const squares::Tree& tree) = 0;
    virtual uint64_t encounters() = 0;
};

using ToboganPtr = std::shared_ptr<ITobogan>;

} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__ITOBOGAN_HPP__
