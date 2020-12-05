/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_3__SQUARES__TREE_HPP__
#define __SRC__2020__DAY_3__SQUARES__TREE_HPP__

#include "../ISquare.hpp"

namespace year2020_day3
{
namespace squares
{

class Tree : public ISquare
{
public:
    void put(ToboganPtr tobogan) override;
};

} // namespace squares
} // namespace year2020_day3

#endif // __SRC__2020__DAY_3__SQUARES__TREE_HPP__
