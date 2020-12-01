/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "ExpensesReport.hpp"

#include <algorithm>

namespace year2020_day1
{

ExpensesReport::ExpensesReport(const std::vector<uint64_t>& entries)
    : entries_(entries)
    , logger_("ExpensesReport")
{
}

std::pair<uint64_t, uint64_t> ExpensesReport::findPairSumingTo(const uint64_t limit)
{
    if (entries_.empty())
    {
        return {0, 0};
    }

    std::sort(entries_.begin(), entries_.end());

    for (int front = 0, back = entries_.size() - 1; front < back;)
    {
        logger_ << debug << "Checking entries: " << entries_[front] << " and " << entries_[back];

        if ((entries_[front] + entries_[back]) == limit)
        {
            logger_ << info << "Found match: "<< entries_[front] << " + " << entries_[back] << " = " << limit;
            return {entries_[front], entries_[back]};
        }

        ((entries_[front] + entries_[back]) > limit) ? back-- : front++;
    }

    return {0, 0};
}

std::tuple<uint64_t, uint64_t, uint64_t> ExpensesReport::findTripletSumingTo(const uint64_t limit)
{
    if (entries_.size() < 3)
    {
        return {0, 0, 0};
    }

    std::sort(entries_.begin(), entries_.end());

    for (int front = 0; front < entries_.size() - 2; ++front)
    {
        int mid = front + 1;
        int back = entries_.size() - 1;

        logger_ << debug << "Checking entries: " << entries_[front] << ", " << entries_[mid] << " and " << entries_[back];

        while (mid < back)
        {
            if ((entries_[front] + entries_[mid] + entries_[back]) == limit)
            {
                logger_ << info << "Found match: "<< entries_[front] << " + " << entries_[mid] << " + " << entries_[back] << " = " << limit;
                return {entries_[front], entries_[mid], entries_[back]};
            }

            ((entries_[front] + entries_[mid] + entries_[back]) < limit) ? mid++ : back--;
        }
    }

    return {0, 0, 0};
}

} // namespace year2020_day1
