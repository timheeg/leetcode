#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums = {3, 2, 2, 3};
  int val = 3;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {2, 2};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {0, 0, 1, 3, 4};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}
