#include <3/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto s{"a"};
  Solution sl{};
  auto result = sl.lengthOfLongestSubstring(s);
  EXPECT_EQ(result, 1);
}

TEST(MoreTest, Case2) {
  auto s{"abcdebcdefghijklefghijklmnopqrstghijk"};
  Solution sl{};
  auto result = sl.lengthOfLongestSubstring(s);
  EXPECT_EQ(result, 16);
}
