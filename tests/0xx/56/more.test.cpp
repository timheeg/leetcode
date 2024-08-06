#include <56/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::vector<std::vector<int>> intervals{{1, 3}, {8, 10}, {15, 18}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 3}, {8, 10}, {15, 18}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case2) {
  std::vector<std::vector<int>> intervals{{1, 3}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 3}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case3) {
  std::vector<std::vector<int>> intervals{
      {1, 3}, {2, 4}, {3, 5}, {4, 6}, {5, 7}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 7}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case4) {
  std::vector<std::vector<int>> intervals{
      {5, 7}, {3, 5}, {2, 4}, {4, 6}, {1, 3}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 7}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case5) {
  std::vector<std::vector<int>> intervals{{15, 18}, {8, 10}, {1, 3}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 3}, {8, 10}, {15, 18}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case6) {
  std::vector<std::vector<int>> intervals{{2, 6},  {8, 10},  {15, 18}, {1, 3},
                                          {9, 11}, {13, 17}, {18, 20}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 6}, {8, 11}, {13, 20}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case7) {
  std::vector<std::vector<int>> intervals{
      {2, 3}, {4, 5}, {6, 7}, {8, 9}, {1, 10}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 10}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case8) {
  std::vector<std::vector<int>> intervals{
      {1, 10}, {2, 3}, {4, 5}, {6, 7}, {8, 9}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{1, 10}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case9_TimeLimit) {
  std::vector<std::vector<int>> intervals{{4, 5}, {2, 4}, {4, 6}, {3, 4},
                                          {0, 0}, {1, 1}, {3, 5}, {2, 2}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{0, 0}, {1, 1}, {2, 6}};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case10) {
  std::vector<std::vector<int>> intervals{{1, 1}, {5, 7}, {4, 6}, {1, 1},
                                          {5, 7}, {3, 4}, {4, 4}, {0, 0},
                                          {2, 2}, {4, 4}};
  Solution s{};
  auto result = s.merge(intervals);
  const std::vector<std::vector<int>> expected{{0, 0}, {1, 1}, {2, 2}, {3, 7}};
  EXPECT_EQ(result, expected);
}
