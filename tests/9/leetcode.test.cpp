#include <9/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto x{121};
  Solution s{};
  auto result = s.isPalindrome(x);
  EXPECT_TRUE(result);
}

TEST(LeetCodeTest, Case2) {
  auto x{-121};
  Solution s{};
  auto result = s.isPalindrome(x);
  EXPECT_FALSE(result);
}

TEST(LeetCodeTest, Case3) {
  auto x{10};
  Solution s{};
  auto result = s.isPalindrome(x);
  EXPECT_FALSE(result);
}
