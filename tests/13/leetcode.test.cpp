#include <13/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  constexpr auto roman{"III"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 3);
}

TEST(LeetCodeTest, Case2) {
  constexpr auto roman{"LVIII"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 58);
}

TEST(LeetCodeTest, Case3) {
  constexpr auto roman{"MCMXCIV"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 1994);
}
