#include <12/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  constexpr auto num{3749};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "MMMDCCXLIX");
}

TEST(LeetCodeTest, Case2) {
  constexpr auto num{58};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "LVIII");
}

TEST(LeetCodeTest, Case3) {
  constexpr auto num{1994};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "MCMXCIV");
}
