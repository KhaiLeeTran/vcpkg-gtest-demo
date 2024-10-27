// tests/test_main.cpp
#include <gtest/gtest.h>
#include "my_code.h"  // File chứa hàm add

TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -1), -2);
}

TEST(MinusTest, PositiveNumbers){
    EXPECT_EQ(minus(3, 2), 1);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
