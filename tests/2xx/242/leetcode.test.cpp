#include <242/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto s{"anagram"};
  auto t {"nagaram"};
  Solution sl{};
  auto result = sl.isAnagram(s, t);
  EXPECT_EQ(result, true);
}

TEST(LeetCodeTest, Case2) {
  auto s{"rat"};
  auto t {"cat"};
  Solution sl{};
  auto result = sl.isAnagram(s, t);
  EXPECT_EQ(result, false);
}
