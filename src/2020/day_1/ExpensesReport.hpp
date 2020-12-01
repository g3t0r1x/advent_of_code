/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __SRC__2020__DAY_1__EXPENSESREPORT_HPP__
#define __SRC__2020__DAY_1__EXPENSESREPORT_HPP__

#include <tuple>
#include <utility>
#include <vector>

#include "utils/logger/Logger.hpp"

namespace year2020_day1
{

class WithSum;

class ExpensesReport
{
public:
    explicit ExpensesReport(const std::vector<uint64_t>& entries);
    std::pair<uint64_t, uint64_t> findPairSumingTo(const uint64_t limit);
    std::tuple<uint64_t, uint64_t, uint64_t> findTripletSumingTo(const uint64_t limit);

private:
    std::vector<uint64_t> entries_;
    Logger logger_;
};

} // namespace year2020_day1

#endif // __SRC__2020__DAY_1__EXPENSESREPORT_HPP__
