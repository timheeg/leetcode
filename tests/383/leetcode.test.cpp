#include <383/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto ransomNote{"a"};
  auto magazine{"b"};
  Solution s{};
  auto result = s.canConstruct(ransomNote, magazine);
  EXPECT_EQ(result, false);
}

TEST(LeetCodeTest, Case2) {
  auto ransomNote{"aa"};
  auto magazine{"ab"};
  Solution s{};
  auto result = s.canConstruct(ransomNote, magazine);
  EXPECT_EQ(result, false);
}

TEST(LeetCodeTest, Case3) {
  auto ransomNote{"aa"};
  auto magazine{"aab"};
  Solution s{};
  auto result = s.canConstruct(ransomNote, magazine);
  EXPECT_EQ(result, true);
}
