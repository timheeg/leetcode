#include <56/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<std::vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 6}, {8, 10}, {15, 18}};
  EXPECT_EQ(result, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<std::vector<int>> intervals{{1, 4}, {4, 5}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 5}};
  EXPECT_EQ(result, expected);
}
