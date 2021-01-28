/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_6__GROUPS_HPP__
#define __SRC__2020__DAY_6__GROUPS_HPP__

#include <string>
#include <vector>

#include "Group.hpp"
#include "ICountingStrategy.hpp"

namespace year2020_day6
{

class Groups
{
public:
    explicit Groups(const std::vector<std::string>& input);

    uint64_t countQuestions(const CountingStrategyPtr& countingStrategy) const;

private:
    std::vector<Group> groups_;
};

} // namespace year2020_day6

#endif // __SRC__2020__DAY_6__GROUPS_HPP__
