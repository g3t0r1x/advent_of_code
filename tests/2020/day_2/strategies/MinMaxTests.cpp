/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "MinMaxFixture.hpp"

namespace year2020_day2
{
namespace strategies
{
namespace ut
{

TEST_P(MinMaxShould, CheckIfGivenPasswordDataIsValid)
{
    const auto passwordData = std::get<0>(GetParam());
    const auto expectedResult = std::get<1>(GetParam());

    EXPECT_EQ(sut_.isValid(passwordData), expectedResult);
}

INSTANTIATE_TEST_SUITE_P(ForProvidedPasswordData, MinMaxShould,
    ::testing::Values(
        std::make_tuple(
            password::Data{ password::Policy{ 1, 3, 'a' }, "abcde" },
            ExpectedResult{true}
        ),
        std::make_tuple(
            password::Data{ password::Policy{ 1, 3, 'b' }, "cdefg" },
            ExpectedResult{false}
        ),
        std::make_tuple(
            password::Data{ password::Policy{ 2, 9, 'c' }, "ccccccccc" },
            ExpectedResult{true}
        )
    ));

} // namespace ut
} // namespace strategies
} // namespace year2020_day2
