#include <70/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto n{2};
  Solution s{};
  auto result = s.climbStairs(n);
  EXPECT_EQ(result, 2);
}

TEST(LeetCodeTest, Case2) {
  auto n{3};
  Solution s{};
  auto result = s.climbStairs(n);
  EXPECT_EQ(result, 3);
}
