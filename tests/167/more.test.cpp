#include <392/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Empty) {
  const std::string a{""};
  const std::string b{""};
  Solution s{};
  auto result = s.isSubsequence(a, b);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, ace) {
  const std::string a{"ace"};
  const std::string b{"abcde"};
  Solution s{};
  auto result = s.isSubsequence(a, b);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, aec) {
  const std::string a{"aec"};
  const std::string b{"abcde"};
  Solution s{};
  auto result = s.isSubsequence(a, b);
  EXPECT_EQ(result, false);
}

TEST(MoreTests, Same) {
  const std::string a{"abcdefghijklmnopqrstuvwxyz"};
  const std::string b{"abcdefghijklmnopqrstuvwxyz"};
  Solution s{};
  auto result = s.isSubsequence(a, b);
  EXPECT_EQ(result, true);
}
