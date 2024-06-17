#include <gtest/gtest.h>
#include "number002.h"

using namespace std;

TEST(MathOperationsTest, Addition) {
    EXPECT_EQ(Add(1, 2), 3);
    EXPECT_EQ(Add(-1, -2), -3);
    std::cout << "test addition" << std::endl;
}

TEST(MathOperationsTest, Subtraction) {
    EXPECT_EQ(Subtract(2, 1), 1);
    EXPECT_EQ(Subtract(-2, -1), -1);
}
