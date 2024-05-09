#include <28/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Q1) {
  const std::string haystack{"The quick brown fox jumps over the lazy dog"};
  const std::string needle{"quick"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, 4);
}

TEST(MoreTests, Q2) {
  const std::string haystack{"The quick brown fox jumps over the lazy dog"};
  const std::string needle{"quick br"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, 4);
}

TEST(MoreTests, Q3) {
  const std::string haystack{"The quick brown fox jumps over the lazy dog"};
  const std::string needle{"wn f"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, 13);
}

TEST(MoreTests, Q4) {
  const std::string haystack{"The quick brown fox jumps over the lazy dog"};
  const std::string needle{"z"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, 37);
}

TEST(MoreTests, Q5) {
  const std::string haystack{"The quick brown fox jumps over the lazy dog"};
  const std::string needle{"og"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, 41);
}

TEST(MoreTests, Long) {
  const std::string haystack{
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000000"
      "000000000000000000000000000000000000000000000000000000000100"};
  const std::string needle{"01"};
  Solution s{};
  auto result = s.strStr(haystack, needle);
  EXPECT_EQ(result, 2636);
}
