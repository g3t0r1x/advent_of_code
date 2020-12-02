/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "InterpreterFixture.hpp"

#include "PasswordDataTestUtils.hpp"

namespace year2020_day2
{
namespace ut
{

TEST_P(InterpreterShould, ConvertRawInputForPasswordDataStructure)
{
    const auto input = std::get<0>(GetParam());
    const auto expectedResult = std::get<1>(GetParam());

    EXPECT_EQ(sut_.invokeFor(input), expectedResult);
}

INSTANTIATE_TEST_SUITE_P(ForProvidedInput, InterpreterShould,
    ::testing::Values(
        std::make_tuple(
            Input{"1-3 a: abcde"},
            ExpectedResult{ password::Data{ password::Policy{ 1, 3, 'a' }, "abcde" } }
        ),
        std::make_tuple(
            Input{"1-3 b: cdefg"},
            ExpectedResult{ password::Data{ password::Policy{ 1, 3, 'b' }, "cdefg" } }
        ),
        std::make_tuple(
            Input{"2-9 c: ccccccccc"},
            ExpectedResult{ password::Data{ password::Policy{ 2, 9, 'c' }, "ccccccccc" } }
        )
    ));

} // namespace ut
} // namespace year2020_day2
