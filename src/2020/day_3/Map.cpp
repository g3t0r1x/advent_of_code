/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Map.hpp"

#include "squares/Empty.hpp"
#include "squares/Tree.hpp"

namespace year2020_day3
{

Map::Map(const std::vector<std::string>& map)
    : rows_(map.size())
    , cols_(map[0].size())
{
    for (std::size_t i = 0; i < rows_; ++i)
    {
        for (std::size_t j = 0; j < cols_; ++j)
        {
            Coords position{j, i};
            map[i][j] == '#'
                ? squares_[position] = std::make_unique<squares::Tree>()
                : squares_[position] = std::make_unique<squares::Empty>();
        }
    }
}

bool Map::inBounds(const Coords& position) const
{
    return position.y >= 0 && position.y < rows_;
}

void Map::put(ToboganPtr tobogan)
{
    const auto position = adjust(tobogan->position());
    squares_[position]->put(tobogan);
}

Coords Map::adjust(const Coords& position) const
{
    return Coords{position.x % (cols_), position.y};
}

} // namespace year2020_day3
