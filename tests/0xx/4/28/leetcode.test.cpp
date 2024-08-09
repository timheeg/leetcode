#include <28/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  const std::string haystack{"sadbutsad"};
  const std::string needle{"sad"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, 0);
}

TEST(LeetCodeTest, Case2) {
  const std::string haystack{"leetcode"};
  const std::string needle{"leeto"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, -1);
}
