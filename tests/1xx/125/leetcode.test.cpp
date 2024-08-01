#include <125/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  const std::string str{"A man, a plan, a canal: Panama"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_TRUE(result);
}

TEST(LeetCodeTest, Case2) {
  const std::string str{"race a car"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_FALSE(result);
}

TEST(LeetCodeTest, Case3) {
  const std::string str{" "};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_TRUE(result);
}
