#include <6/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{3};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAHNAPLSIIGYIR");
}

TEST(LeetCodeTest, Case2) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{4};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PINALSIGYAHRPI");
}

TEST(LeetCodeTest, Case3) {
  const std::string str{"A"};
  constexpr auto num_rows{1};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "A");
}
