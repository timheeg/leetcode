#include <167/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> numbers{2, 7, 11, 15};
  auto target{9};
  Solution s{};
  auto result = s.twoSum(numbers, target);
  std::vector<int> expected{1, 2};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> numbers{2, 3, 4};
  auto target{6};
  Solution s{};
  auto result = s.twoSum(numbers, target);
  std::vector<int> expected{1, 3};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> numbers{-1, 0};
  auto target{-1};
  Solution s{};
  auto result = s.twoSum(numbers, target);
  std::vector<int> expected{1, 2};
  EXPECT_EQ(result, expected);
}
