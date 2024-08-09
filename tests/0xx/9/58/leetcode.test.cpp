#include <58/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  constexpr auto sentence{"Hello World"};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 5);
}

TEST(LeetCodeTest, Case2) {
  constexpr auto sentence{"   fly me   to   the moon  "};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 4);
}

TEST(LeetCodeTest, Case3) {
  constexpr auto sentence{"luffy is still joyboy"};
  Solution s{};
  auto length = s.lengthOfLastWord(sentence);
  EXPECT_EQ(length, 6);
}
