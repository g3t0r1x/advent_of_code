/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "FuelCounterUpperFixture.hpp"

namespace year2019_day1
{
namespace ut
{

TEST_P(ForProvidedMasses, ReturnCorrectFuelRequired)
{
    auto masses = std::get<0>(GetParam());
    auto totalFuel = std::get<1>(GetParam());

    EXPECT_EQ(sut_.calculate(masses), totalFuel);
}

INSTANTIATE_TEST_SUITE_P(FuelCounterUpperShould, ForProvidedMasses,
    ::testing::Values(
        std::make_tuple(MassesVec{12u}, TotalFuel{2u}),
        std::make_tuple(MassesVec{12u, 14u}, TotalFuel{4u}),
        std::make_tuple(MassesVec{12u, 14u, 1969u, 100756u}, TotalFuel{34241u})
    ));

} // namespace ut
} // namespace year2019_day1
