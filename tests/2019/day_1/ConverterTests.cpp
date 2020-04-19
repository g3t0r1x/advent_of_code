/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "ConverterFixture.hpp"
#include "FuelOperatorsForTest.hpp"

namespace ut
{

TEST_P(ForProvidedModule, ReturnCorrectFuel)
{
    auto module = std::get<0>(GetParam());
    auto fuel = std::get<1>(GetParam());

    EXPECT_EQ(sut_.invoke(module), fuel);
}

INSTANTIATE_TEST_SUITE_P(ConverterShould, ForProvidedModule,
    ::testing::Values(
        std::make_tuple(Module{12u}, Fuel{2u}),
        std::make_tuple(Module{14u}, Fuel{2u}),
        std::make_tuple(Module{1969u}, Fuel{654u}),
        std::make_tuple(Module{100756u}, Fuel{33583u})
    ));

} // namespace ut
