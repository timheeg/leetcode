#include <137/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums{2, 2, 3, 2};
  Solution s{};
  auto result = s.singleNumber(nums);
  EXPECT_EQ(result, 3);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums{0, 1, 0, 1, 0, 1, 99};
  Solution s{};
  auto result = s.singleNumber(nums);
  EXPECT_EQ(result, 99);
}
