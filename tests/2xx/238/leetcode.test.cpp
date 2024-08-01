#include <238/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums = {1, 2, 3, 4};
  Solution s;
  auto result = s.productExceptSelf(nums);
  std::vector<int> expected = {24, 12, 8, 6};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums = {-1, 1, 0, -3, 3};
  Solution s;
  auto result = s.productExceptSelf(nums);
  std::vector<int> expected = {0, 0, 9, 0, 0};
  EXPECT_EQ(result, expected);
}
