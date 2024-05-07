#include <151/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::string string{"the sky is blue"};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result, "blue is sky the");
}

TEST(LeetCodeTest, Case2) {
  std::string string{"  hello world  "};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result, "world hello");
}

TEST(LeetCodeTest, Case3) {
  std::string string{"a good   example"};
  Solution s{};
  auto result = s.reverseWords(string);
  EXPECT_EQ(result, "example good a");
}
