#include <172/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto n{3};
  Solution s{};
  auto result = s.trailingZeroes(n);
  EXPECT_EQ(result, 0);
}

TEST(LeetCodeTest, Case2) {
  auto n{5};
  Solution s{};
  auto result = s.trailingZeroes(n);
  EXPECT_EQ(result, 1);
}

TEST(LeetCodeTest, Case3) {
  auto n{0};
  Solution s{};
  auto result = s.trailingZeroes(n);
  EXPECT_EQ(result, 0);
}
