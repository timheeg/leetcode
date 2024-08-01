#include <151/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, One) {
  std::string string{"one"};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result, "one");
}

TEST(MoreTests, OneMore) {
  std::string string{"one ones"};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result, "ones one");
}

TEST(MoreTests, Long) {
  std::string string{"antidisestablishmentarianism"};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result, "antidisestablishmentarianism");
}

TEST(MoreTests, LongMore) {
  std::string string{
      "antidisestablishmentarianism antidisestablishmentarianisms"};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result,
            "antidisestablishmentarianisms antidisestablishmentarianism");
}

TEST(MoreTests, LongMany) {
  std::string string{
      "antidisestablishmentarianismte antidisestablishmentarianismzra "
      "antidisestablishmentarianisms"};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result,
            "antidisestablishmentarianisms antidisestablishmentarianismzra "
            "antidisestablishmentarianismte");
}
