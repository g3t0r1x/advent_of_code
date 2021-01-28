/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Groups.hpp"

#include <numeric>

namespace year2020_day6
{

Groups::Groups(const std::vector<std::string>& input)
{
    Group group;

    for (const auto& questionaire : input)
    {
        if (questionaire.empty())
        {
            groups_.push_back(group);
            group.clear();
        }
        else
        {
            group.add(questionaire);
        }
    }

    groups_.push_back(group);
}

uint64_t Groups::countQuestions(const CountingStrategyPtr& countingStrategy) const
{
    return std::accumulate(groups_.cbegin(), groups_.cend(), 0,
        [countingStrategy](const auto& rhs, const auto& lhs)
        {
            return rhs + lhs.countQuestions(countingStrategy);
        });
}

} // namespace year2020_day6
