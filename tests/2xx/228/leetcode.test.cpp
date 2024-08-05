#include <228/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums{0, 1, 2, 4, 5, 7};
  Solution sl{};
  auto result = sl.summaryRanges(nums);
  std::vector<std::string> expected = {"0->2", "4->5", "7"};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums{0, 2, 3, 4, 6, 8, 9};
  Solution sl{};
  auto result = sl.summaryRanges(nums);
  std::vector<std::string> expected = {"0", "2->4", "6", "8->9"};
  EXPECT_EQ(result, expected);
}
