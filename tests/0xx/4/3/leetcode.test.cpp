#include <3/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto s{"abcabcbb"};
  Solution sl{};
  auto result = sl.lengthOfLongestSubstring(s);
  EXPECT_EQ(result, 3);
}

TEST(LeetCodeTest, Case2) {
  auto s{"bbbbb"};
  Solution sl{};
  auto result = sl.lengthOfLongestSubstring(s);
  EXPECT_EQ(result, 1);
}

TEST(LeetCodeTest, Case3) {
  auto s{"pwwkew"};
  Solution sl{};
  auto result = sl.lengthOfLongestSubstring(s);
  EXPECT_EQ(result, 3);
}
