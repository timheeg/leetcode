#include <68/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Wrong1) {
  std::vector<std::string> words{"ask", "not", "what", "your", "country", "can",
                                 "do",  "for", "you",  "ask",  "what",    "you",
                                 "can", "do",  "for",  "your", "country"};
  auto max_width{16};
  Solution s{};
  auto result = s.fullJustify(words, max_width);
  const std::vector<std::string> expected{
      "ask   not   what", "your country can", "do  for  you ask",
      "what  you can do", "for your country"};
  EXPECT_EQ(result, expected);
}
