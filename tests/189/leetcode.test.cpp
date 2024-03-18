#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums = {1,2,3,4,5,6,7};
  int k = 3;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {5,6,7,1,2,3,4};
  EXPECT_EQ(nums, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums = {-1,-100,3,99};
  int k = 2;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {3,99,-1,-100};
  EXPECT_EQ(nums, expected);
}
