#include <392/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  const std::string a{"abc"};
  const std::string b{"ahbgdc"};
  Solution s{};
  auto result = s.isSubsequence(a, b);
  EXPECT_EQ(result, true);
}

TEST(LeetCodeTest, Case2) {
  const std::string a{"axc"};
  const std::string b{"ahbgdc"};
  Solution s{};
  auto result = s.isSubsequence(a, b);
  EXPECT_EQ(result, false);
}
