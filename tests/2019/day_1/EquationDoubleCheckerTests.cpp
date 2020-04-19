/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "EquationDoubleCheckerFixture.hpp"

namespace year2019_day1
{
namespace ut
{

TEST_P(EquationDoubleCheckerShould, ReturnCorrectFuelRequired)
{
    auto masses = std::get<0>(GetParam());
    auto totalFuel = std::get<1>(GetParam());

    EXPECT_EQ(sut_.calculate(masses), totalFuel);
}

INSTANTIATE_TEST_SUITE_P(ForProvidedMasses, EquationDoubleCheckerShould,
    ::testing::Values(
        std::make_tuple(MassesVec{12u}, TotalFuel{2u}),
        std::make_tuple(MassesVec{1969u}, TotalFuel{966u}),
        std::make_tuple(MassesVec{100756u}, TotalFuel{50346u}),
        std::make_tuple(MassesVec{12u, 1969u, 100756u}, TotalFuel{51314u})
    ));

} // namespace ut
} // namespace year2019_day1
