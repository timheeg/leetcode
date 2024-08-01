#include <242/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto s{"anagram"};
  auto t {"nagaram"};
  Solution sl{};
  auto result = sl.isAnagram(s, t);
  EXPECT_EQ(result, true);
}

TEST(MoreTest, Case2) {
  auto s{"a decimal point"};
  auto t {"im a dot in place"};
  Solution sl{};
  auto result = sl.isAnagram(s, t);
  EXPECT_EQ(result, true);
}
