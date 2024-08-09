#include <42/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  Solution s{};
  auto result = s.trap(height);
  EXPECT_EQ(result, 6);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> height{4, 2, 0, 3, 2, 5};
  Solution s{};
  auto result = s.trap(height);
  EXPECT_EQ(result, 9);
}
