#include <198/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums{1, 2, 3, 1};
  Solution s{};
  auto result = s.rob(nums);
  EXPECT_EQ(result, 4);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums{2, 7, 9, 3, 1};
  Solution s{};
  auto result = s.rob(nums);
  EXPECT_EQ(result, 12);
}
