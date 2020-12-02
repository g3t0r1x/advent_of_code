/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "PasswordsFixture.hpp"

#include <exception>

#include "PasswordDataTestUtils.hpp"
#include "StrategyMock.hpp"

namespace year2020_day2
{
namespace ut
{

TEST_P(PasswordsShould, ThrowExceptionWhenStrategyIsNotSet)
{
    const auto password = GetParam();

    createSut({password});

    EXPECT_THROW(sut_->countValid(), std::runtime_error);
}

TEST_P(PasswordsShould, CountValidNumberOfPasswordsAccordingToPolicy)
{
    const auto password = GetParam();
    const auto strategyMock = std::make_shared<StrategyStrictMock>();

    createSut({password});
    sut_->setStrategy(strategyMock);

    EXPECT_CALL(*strategyMock, isValid(password));
    sut_->countValid();
}

INSTANTIATE_TEST_SUITE_P(ForProvidedPasswordPolicies, PasswordsShould,
    ::testing::Values(
            password::Data{ password::Policy{ 1, 3, 'a' }, "abcde" },
            password::Data{ password::Policy{ 1, 3, 'b' }, "cdefg" },
            password::Data{ password::Policy{ 2, 9, 'c' }, "ccccccccc" }
        )
    );

} // namespace ut
} // namespace year2020_day2
