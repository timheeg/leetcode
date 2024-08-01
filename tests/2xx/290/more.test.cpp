#include <290/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto pattern {"abbac"};
  auto s{"dog cat cat dog cat"};
  Solution sl{};
  auto result = sl.wordPattern(pattern, s);
  EXPECT_EQ(result, false);
}

TEST(MoreTest, Case2) {
  auto pattern {"abbabc"};
  auto s{"dog cat cat dog cat bat"};
  Solution sl{};
  auto result = sl.wordPattern(pattern, s);
  EXPECT_EQ(result, true);
}

TEST(MoreTest, Case3) {
  auto pattern {"aaa"};
  auto s{"a a a a"};
  Solution sl{};
  auto result = sl.wordPattern(pattern, s);
  EXPECT_EQ(result, false);
}
