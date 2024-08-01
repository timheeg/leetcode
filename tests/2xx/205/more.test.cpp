#include <205/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto s{"yes"};
  auto t{"can"};
  Solution sl{};
  auto result = sl.isIsomorphic(s, t);
  EXPECT_EQ(result, true);
}

TEST(MoreTest, Case2) {
  auto s{"badc"};
  auto t{"baba"};
  Solution sl{};
  auto result = sl.isIsomorphic(s, t);
  EXPECT_EQ(result, false);
}
