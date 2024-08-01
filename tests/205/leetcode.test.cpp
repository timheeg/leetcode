#include <205/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  auto s{"egg"};
  auto t{"add"};
  Solution sl{};
  auto result = sl.isIsomorphic(s, t);
  EXPECT_EQ(result, true);
}

TEST(LeetCodeTest, Case2) {
  auto s{"foo"};
  auto t{"bar"};
  Solution sl{};
  auto result = sl.isIsomorphic(s, t);
  EXPECT_EQ(result, false);
}

TEST(LeetCodeTest, Case3) {
  auto s{"paper"};
  auto t{"title"};
  Solution sl{};
  auto result = sl.isIsomorphic(s, t);
  EXPECT_EQ(result, true);
}
