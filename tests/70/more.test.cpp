#include <70/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto n{5};
  Solution s{};
  auto result = s.climbStairs(n);
  EXPECT_EQ(result, 8);
}
