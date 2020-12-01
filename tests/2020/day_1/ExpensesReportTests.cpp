/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "ExpensesReportFixture.hpp"

namespace year2020_day1
{
namespace ut
{

TEST_P(ExpensesReportShouldFindTwoEntries, SumingToTheLimit)
{
    const auto entries = std::get<0>(GetParam());
    const auto limit = std::get<1>(GetParam());
    const auto expectedResult = std::get<2>(GetParam());

    createSut(entries);

    EXPECT_EQ(sut_->findTwoEntriesSumingTo(limit), expectedResult);
}

INSTANTIATE_TEST_SUITE_P(ForProvidedEntriesAndLimit, ExpensesReportShouldFindTwoEntries,
    ::testing::Values(
        std::make_tuple(
            Entries{},
            Limit{150},
            ExpectedPairResult{0, 0}
        ),
        std::make_tuple(
            Entries{1},
            Limit{150},
            ExpectedPairResult{0, 0}
        ),
        std::make_tuple(
            Entries{1721, 979, 366, 299, 675, 1456},
            Limit{2020},
            ExpectedPairResult{299, 1721}
        )
    ));

TEST_P(ExpensesReportShouldFindThreeEntries, SumingToTheLimit)
{
    const auto entries = std::get<0>(GetParam());
    const auto limit = std::get<1>(GetParam());
    const auto expectedResult = std::get<2>(GetParam());

    createSut(entries);

    EXPECT_EQ(sut_->findThreeEntriesSumingTo(limit), expectedResult);
}

INSTANTIATE_TEST_SUITE_P(ForProvidedEntriesAndLimit, ExpensesReportShouldFindThreeEntries,
    ::testing::Values(
        std::make_tuple(
            Entries{},
            Limit{150},
            ExpectedTrioResult{0, 0, 0}
        ),
        std::make_tuple(
            Entries{1},
            Limit{150},
            ExpectedTrioResult{0, 0, 0}
        ),
        std::make_tuple(
            Entries{1, 2},
            Limit{150},
            ExpectedTrioResult{0, 0, 0}
        ),
        std::make_tuple(
            Entries{1721, 979, 366, 299, 675, 1456},
            Limit{2020},
            ExpectedTrioResult{366, 675, 979}
        )
    ));

} // namespace ut
} // namespace year2020_day1
