#include <11/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
  Solution s{};
  auto result = s.maxArea(height);
  EXPECT_EQ(result, 49);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> height{1, 1};
  Solution s{};
  auto result = s.maxArea(height);
  EXPECT_EQ(result, 1);
}
