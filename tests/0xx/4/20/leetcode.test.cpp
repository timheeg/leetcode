#include <20/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::string s = "()";
  Solution sl{};
  auto result = sl.isValid(s);
  EXPECT_EQ(result, true);
}

TEST(LeetCodeTest, Case2) {
  std::string s = "()[]{}";
  Solution sl{};
  auto result = sl.isValid(s);
  EXPECT_EQ(result, true);
}

TEST(LeetCodeTest, Case3) {
  std::string s = "(]";
  Solution sl{};
  auto result = sl.isValid(s);
  EXPECT_EQ(result, false);
}
