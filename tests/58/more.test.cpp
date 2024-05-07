#include <58/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Typographical) {
  constexpr auto sentence{"The quick brown fox jumps over the lazy dog"};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 3);
}

TEST(MoreTests, TypographicalSpaces) {
  constexpr auto sentence{"The quick brown fox jumps over the lazy dog   "};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 3);
}

TEST(MoreTests, Long) {
  constexpr auto sentence{"antidisestablishmentarianism"};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 28);
}

TEST(MoreTests, LongSpaces) {
  constexpr auto sentence{"antidisestablishmentarianism           "};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 28);
}

TEST(MoreTests, LongEnd) {
  constexpr auto sentence{"a antidisestablishmentarianism"};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 28);
}
