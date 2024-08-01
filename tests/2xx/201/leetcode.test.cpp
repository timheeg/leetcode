#include <201/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  Solution s{};
  auto result = s.rangeBitwiseAnd(5, 7);
  EXPECT_EQ(result, 4);
}

TEST(LeetCodeTest, Case2) {
  Solution s{};
  auto result = s.rangeBitwiseAnd(0, 0);
  EXPECT_EQ(result, 0);
}

TEST(LeetCodeTest, Case3) {
  Solution s{};
  auto result = s.rangeBitwiseAnd(1, 2147483647);
  EXPECT_EQ(result, 0);
}
