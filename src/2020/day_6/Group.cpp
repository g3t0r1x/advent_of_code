/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "Group.hpp"

namespace year2020_day6
{

Group::Group() : questions_() , respondents_(0)
{
}

void Group::add(const std::string& questionaire)
{
    for (const auto& question : questionaire)
    {
        questions_[question]++;
    }

    respondents_++;
}

void Group::clear()
{
    questions_.clear();
    respondents_ = 0;
}

uint64_t Group::countQuestions(const CountingStrategyPtr& countingStrategy) const
{
    return countingStrategy->with(respondents_)->with(questions_)->count();
}

} // namespace year2020_day6
