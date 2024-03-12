#include <gtest/gtest.h>

TEST(PassTest, Test) {
    constexpr auto expected = 0;
    constexpr auto result = 0;
    EXPECT_EQ(expected, result);
}
