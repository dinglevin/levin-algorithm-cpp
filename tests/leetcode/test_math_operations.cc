#include <gtest/gtest.h>
#include "math_operations.h"

TEST(MathOperationsTest, Addition) {
    EXPECT_EQ(Add(1, 2), 3);
    EXPECT_EQ(Add(-1, -2), -3);
}

TEST(MathOperationsTest, Subtraction) {
    EXPECT_EQ(Subtract(2, 1), 1);
    EXPECT_EQ(Subtract(-2, -1), -1);
}
