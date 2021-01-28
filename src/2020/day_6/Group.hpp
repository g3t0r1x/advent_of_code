/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_6__GROUP_HPP__
#define __SRC__2020__DAY_6__GROUP_HPP__

#include <map>
#include <string>

#include "ICountingStrategy.hpp"

namespace year2020_day6
{

class Group
{
public:
    Group();

    void add(const std::string& questionaire);
    void clear();
    uint64_t countQuestions(const CountingStrategyPtr& countingStrategy) const;

private:
    std::map<char, uint64_t> questions_;
    uint64_t respondents_;
};

} // namespace year2020_day6

#endif // __SRC__2020__DAY_6__GROUP_HPP__
