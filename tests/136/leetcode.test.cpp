#include <136/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums{2, 2, 1};
  Solution s{};
  auto result = s.singleNumber(nums);
  EXPECT_EQ(result, 1);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums{4, 1, 2, 1, 2};
  Solution s{};
  auto result = s.singleNumber(nums);
  EXPECT_EQ(result, 4);
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> nums{1};
  Solution s{};
  auto result = s.singleNumber(nums);
  EXPECT_EQ(result, 1);
}
