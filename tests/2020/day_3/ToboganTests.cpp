/*
 * Copyright by g3t0r1x. All rights reserved.
 */

#include "ToboganFixture.hpp"

#include "2020/day_3/squares/Empty.hpp"
#include "2020/day_3/squares/Tree.hpp"
#include "CoordsTestUtils.hpp"

namespace year2020_day3
{
namespace ut
{

TEST_F(ToboganShould, ReturnCorrectPositionInConjunctionWithMoveAndResetMethodCalls)
{
    Coords position{0, 0};
    Coords slope{3, 4};

    EXPECT_EQ(sut_.position(), position);

    sut_.move(slope);
    EXPECT_EQ(sut_.position(), position += slope);

    sut_.move(slope);
    EXPECT_EQ(sut_.position(), position += slope);

    sut_.reset(initialPosition_);
    EXPECT_EQ(sut_.position(), initialPosition_);

    sut_.reset(position);
    EXPECT_EQ(sut_.position(), position);
}

TEST_F(ToboganShould, ReturnCorrectEncountersInConjunctionWithEncounterMethodCalls)
{
    squares::Empty emptySquare;
    squares::Tree treeSquare;

    EXPECT_EQ(sut_.encounters(), 0);

    sut_.encounter(emptySquare);
    EXPECT_EQ(sut_.encounters(), 0);

    sut_.encounter(treeSquare);
    EXPECT_EQ(sut_.encounters(), 1);

    sut_.encounter(treeSquare);
    EXPECT_EQ(sut_.encounters(), 2);

    sut_.encounter(emptySquare);
    EXPECT_EQ(sut_.encounters(), 2);

    sut_.reset(initialPosition_);
    EXPECT_EQ(sut_.encounters(), 0);

    sut_.encounter(treeSquare);
    EXPECT_EQ(sut_.encounters(), 1);
}

} // namespace ut
} // namespace year2020_day3
