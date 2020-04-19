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
        std::make_tuple(impl::Module{12u}, impl::Fuel{2u}),
        std::make_tuple(impl::Module{14u}, impl::Fuel{2u}),
        std::make_tuple(impl::Module{1969u}, impl::Fuel{654u}),
        std::make_tuple(impl::Module{100756u}, impl::Fuel{33583u})
    ));

} // namespace ut
