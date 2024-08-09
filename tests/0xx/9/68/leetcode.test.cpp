#include <68/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<std::string> words{
      "This", "is", "an", "example", "of", "text", "justification."};
  auto max_width{16};
  Solution s{};
  auto result = s.fullJustify(words, max_width);
  const std::vector<std::string> expected{
      "This    is    an", "example  of text", "justification.  "};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<std::string> words{"What",           "must",  "be",
                                 "acknowledgment", "shall", "be"};
  auto max_width{16};
  Solution s{};
  auto result = s.fullJustify(words, max_width);
  const std::vector<std::string> expected{
      "What   must   be", "acknowledgment  ", "shall be        "};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case3) {
  std::vector<std::string> words{
      "Science", "is", "what",       "we",   "understand", "well",
      "enough",  "to", "explain",    "to",   "a",          "computer.",
      "Art",     "is", "everything", "else", "we",         "do"};
  auto max_width{20};
  Solution s{};
  auto result = s.fullJustify(words, max_width);
  const std::vector<std::string> expected{
      "Science  is  what we", "understand      well", "enough to explain to",
      "a  computer.  Art is", "everything  else  we", "do                  "};
  EXPECT_EQ(result, expected);
}
