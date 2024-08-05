#include <228/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::vector<int> nums{0, 1, 2, 4, 5, 7};
  Solution sl{};
  auto result = sl.summaryRanges(nums);
  std::vector<std::string> expected = {"0->2", "4->5", "7"};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case2) {
  std::vector<int> nums{-1};
  Solution sl{};
  auto result = sl.summaryRanges(nums);
  std::vector<std::string> expected = {"-1"};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case3) {
  std::vector<int> nums{-5, -2, -1, 0, 1, 3, 8, 9};
  Solution sl{};
  auto result = sl.summaryRanges(nums);
  std::vector<std::string> expected = {"-5", "-2->1", "3", "8->9"};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case4) {
  std::vector<int> nums{0, 1};
  Solution sl{};
  auto result = sl.summaryRanges(nums);
  std::vector<std::string> expected = {"0->1"};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case5_RuntimeError) {
  std::vector<int> nums{-2147483648, -2147483647, 2147483647};
  Solution sl{};
  auto result = sl.summaryRanges(nums);
  std::vector<std::string> expected = {"-2147483648->-2147483647",
                                       "2147483647"};
  EXPECT_EQ(result, expected);
}
