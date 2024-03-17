#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(LeetCodeTest, OneElement) {
  std::vector<int> nums = {2};

  Solution s;
  auto k = s.majorityElement(nums);

  int expected_element{2};
  EXPECT_EQ(k, expected_element);
}

TEST(LeetCodeTest, SameElement) {
  std::vector<int> nums = {2, 2, 2, 2, 2, 2};

  Solution s;
  auto k = s.majorityElement(nums);

  int expected_element{2};
  EXPECT_EQ(k, expected_element);
}

TEST(LeetCodeTest, CheckAllElements) {
  std::vector<int> nums = {1, 2, 2, 1, 2};

  Solution s;
  auto k = s.majorityElement(nums);

  int expected_element{2};
  EXPECT_EQ(k, expected_element);
}

TEST(LeetCodeTest, BailOut) {
  std::vector<int> nums = {1, 2, 2, 2, 2, 1, 3};

  Solution s;
  auto k = s.majorityElement(nums);

  int expected_element{2};
  EXPECT_EQ(k, expected_element);
}

TEST(LeetCodeTest, LongerList) {
  std::vector<int> nums = {1, 2, 1, 4, 2, 2, 4, 1, 2, 3, 2, 5, 4, 1, 2, 2,
                           2, 1, 2, 2, 4, 2, 2, 3, 2, 1, 2, 2, 2, 3, 2, 1};

  Solution s;
  auto k = s.majorityElement(nums);

  int expected_element{2};
  EXPECT_EQ(k, expected_element);
}
