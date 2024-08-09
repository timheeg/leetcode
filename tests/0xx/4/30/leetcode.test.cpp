#include <30/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto s{"barfoothefoobarman"};
  std::vector<std::string> words{"foo", "bar"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{0, 9};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case2) {
  auto s{"wordgoodgoodgoodbestword"};
  std::vector<std::string> words{"word", "good", "best", "word"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case3) {
  auto s{"barfoofoobarthefoobarman"};
  std::vector<std::string> words{"bar", "foo", "the"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{6, 9, 12};
  EXPECT_EQ(result, expected);
}
