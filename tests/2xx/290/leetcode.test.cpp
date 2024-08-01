#include <290/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto pattern {"abba"};
  auto s{"dog cat cat dog"};
  Solution sl{};
  auto result = sl.wordPattern(pattern, s);
  EXPECT_EQ(result, true);
}

TEST(LeetCodeTest, Case2) {
  auto pattern {"abba"};
  auto s{"dog cat cat fish"};
  Solution sl{};
  auto result = sl.wordPattern(pattern, s);
  EXPECT_EQ(result, false);
}

TEST(LeetCodeTest, Case3) {
  auto pattern {"aaaa"};
  auto s{"dog cat cat dog"};
  Solution sl{};
  auto result = sl.wordPattern(pattern, s);
  EXPECT_EQ(result, false);
}
