/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "GeologyFixture.hpp"

#include "CoordsTestUtils.hpp"

namespace year2020_day3
{
namespace ut
{

TEST_F(GeologyShould, ReturnNoEncountersWhenToboganIsOutOfTheMapAtStart)
{
    Coords slope{1, 1};
    Coords toboganPosition{0, 0};
    uint64_t expectedResult = 0;

    EXPECT_CALL(*tobogan_, position()).WillOnce(::testing::Return(toboganPosition));
    EXPECT_CALL(*map_, inBounds(toboganPosition)).WillOnce(::testing::Return(false));
    EXPECT_CALL(*tobogan_, encounters()).WillOnce(::testing::Return(expectedResult));
    EXPECT_EQ(sut_.moveToboggan(slope), expectedResult);
}

TEST_F(GeologyShould, ReturnSomeEncountersWhenToboganIsInMapBounds)
{
    Coords slope{1, 1};
    Coords toboganPosition_1{0, 0};
    Coords toboganPosition_2{1, 1};
    uint64_t expectedResult = 1;

    ::testing::InSequence s;

    EXPECT_CALL(*tobogan_, position()).WillOnce(::testing::Return(toboganPosition_1));
    EXPECT_CALL(*map_, inBounds(toboganPosition_1)).WillOnce(::testing::Return(true));
    EXPECT_CALL(*tobogan_, position()).WillOnce(::testing::Return(toboganPosition_1)); // logger
    EXPECT_CALL(*map_, put(::testing::_));
    EXPECT_CALL(*tobogan_, move(slope));
    EXPECT_CALL(*tobogan_, position()).WillOnce(::testing::Return(toboganPosition_2));
    EXPECT_CALL(*map_, inBounds(toboganPosition_2)).WillOnce(::testing::Return(false));
    EXPECT_CALL(*tobogan_, encounters()).WillOnce(::testing::Return(expectedResult));
    EXPECT_EQ(sut_.moveToboggan(slope), expectedResult);
}

} // namespace ut
} // namespace year2020_day3
