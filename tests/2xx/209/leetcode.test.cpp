#include <209/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto target{7};
  std::vector<int> nums{2, 3, 1, 2, 4, 3};
  Solution sl{};
  auto result = sl.minSubArrayLen(target, nums);
  EXPECT_EQ(result, 2);
}

TEST(LeetCodeTest, Case2) {
  auto target{4};
  std::vector<int> nums{1, 4, 4};
  Solution sl{};
  auto result = sl.minSubArrayLen(target, nums);
  EXPECT_EQ(result, 1);
}

TEST(LeetCodeTest, Case3) {
  auto target{11};
  std::vector<int> nums{1, 1, 1, 1, 1, 1, 1, 1};
  Solution sl{};
  auto result = sl.minSubArrayLen(target, nums);
  EXPECT_EQ(result, 0);
}
