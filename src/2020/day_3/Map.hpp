/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__MAP_HPP__
#define __SRC__2020__DAY_3__MAP_HPP__

#include <map>
#include <string>
#include <vector>

#include "IMap.hpp"
#include "ISquare.hpp"

namespace year2020_day3
{

class Map : public IMap
{
public:
    explicit Map(const std::vector<std::string>& map);

    bool inBounds(const Coords& position) const override;
    void put(ToboganPtr tobogan) override;

private:
    Coords adjust(const Coords& position) const;

    uint64_t rows_;
    uint64_t cols_;
    std::map<Coords, SquarePtr> squares_;
};

} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__MAP_HPP__
