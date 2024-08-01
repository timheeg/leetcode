#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums = {3, 2, 3};

  Solution s;
  auto k = s.majorityElement(nums);

  int expected_element{3};
  EXPECT_EQ(k, expected_element);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

  Solution s;
  auto k = s.majorityElement(nums);

  int expected_element{2};
  EXPECT_EQ(k, expected_element);
}
