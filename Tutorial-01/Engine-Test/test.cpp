#include "pch.h"

#include "Vector2D.h"

TEST(Vector2D, VectorCtor)
{
    Math::Vector2D first{1, 2};
    EXPECT_EQ(1, first.x);
    EXPECT_EQ(2, first.y);
}

TEST(Vector2D, VectorAddition)
{
    Math::Vector2D first{1, 2};
    Math::Vector2D second{3, 4};
    auto result1 = first + second;
    auto result2 = second + first;
    EXPECT_FLOAT_EQ(result1.x, 4);
    EXPECT_FLOAT_EQ(result1.y, 6);

    EXPECT_TRUE(result1 == result2);
}

TEST(Vector2D, ScalarMultiplication)
{
    Math::Vector2D first{-7, 3};
    auto result1 = first * 8;
    auto result2 = 8 * first;

    EXPECT_FLOAT_EQ(result1.x, -56);
    EXPECT_FLOAT_EQ(result1.y, 24);

    EXPECT_TRUE(result1 == result2);
}
