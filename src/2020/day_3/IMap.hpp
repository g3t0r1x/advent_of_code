/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__IMAP_HPP__
#define __SRC__2020__DAY_3__IMAP_HPP__

#include <memory>

#include "Coords.hpp"
#include "ITobogan.hpp"

namespace year2020_day3
{

class IMap
{
public:
    virtual ~IMap() = default;
    virtual bool inBounds(const Coords& position) const = 0;
    virtual void put(ToboganPtr tobogan) = 0;
};

using MapPtr = std::shared_ptr<IMap>;

} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__IMAP_HPP__
