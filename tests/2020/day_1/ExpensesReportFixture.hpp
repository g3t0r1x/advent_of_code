/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#ifndef __TESTS__2020__DAY_1__EXPENSESREPORTFIXTURE_HPP__
#define __TESTS__2020__DAY_1__EXPENSESREPORTFIXTURE_HPP__

#include <memory>
#include <tuple>
#include <utility>
#include <vector>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "2020/day_1/ExpensesReport.hpp"

namespace year2020_day1
{
namespace ut
{

using Entries = std::vector<uint64_t>;
using Limit = uint64_t;
using ExpectedPairResult = std::pair<uint64_t, uint64_t>;
using ExpectedTrioResult = std::tuple<uint64_t, uint64_t, uint64_t>;

class ExpensesReportBase
{
public:
    ExpensesReportBase() = default;

    void createSut(const std::vector<uint64_t>& entries)
    {
        sut_ = std::make_unique<ExpensesReport>(entries);
    }

protected:
    std::unique_ptr<ExpensesReport> sut_;
};

class ExpensesReportShouldFindTwoEntries
    : public ExpensesReportBase
    , public ::testing::TestWithParam<std::tuple<Entries, Limit, ExpectedPairResult>>
{
};

class ExpensesReportShouldFindThreeEntries
    : public ExpensesReportBase
    , public ::testing::TestWithParam<std::tuple<Entries, Limit, ExpectedTrioResult>>
{
};



} // namespace ut
} // namespace year2020_day1

#endif // __TESTS__2020__DAY_1__EXPENSESREPORTFIXTURE_HPP__
