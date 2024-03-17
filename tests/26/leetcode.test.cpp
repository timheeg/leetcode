#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums = {1, 2, 2};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 2};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {0, 1, 2, 3, 4};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}
