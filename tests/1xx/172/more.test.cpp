#include <172/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto n{13};
  Solution s{};
  auto result = s.trailingZeroes(n);
  EXPECT_EQ(result, 2);
}

TEST(MoreTest, Case2) {
  auto n{30};
  Solution s{};
  auto result = s.trailingZeroes(n);
  EXPECT_EQ(result, 2);
}
