#include <135/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, One) {
  std::vector<int> ratings{1};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 1);
}

TEST(MoreTests, AllOne) {
  std::vector<int> ratings{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 10);
}

TEST(MoreTests, AllOneFirstHigh) {
  std::vector<int> ratings{1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 11);
}

TEST(MoreTests, AllOneMidHigh) {
  std::vector<int> ratings{0, 0, 0, 0, 1, 0, 0, 0, 0, 0};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 11);
}

TEST(MoreTests, AllOneLastHigh) {
  std::vector<int> ratings{0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 11);
}

TEST(MoreTests, Increasing) {
  std::vector<int> ratings{0, 1, 2, 3, 4, 5};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 21);
}

TEST(MoreTests, Decreasing) {
  std::vector<int> ratings{5, 4, 3, 2, 1, 0};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 21);
}

TEST(MoreTests, IncreasingShort) {
  std::vector<int> ratings{0, 5};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 3);
}

TEST(MoreTests, DecreasingShort) {
  std::vector<int> ratings{5, 0};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 3);
}

TEST(MoreTests, LargeDecreasingShort) {
  std::vector<int> ratings{110, 21, 1};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 6);
}

TEST(MoreTests, WrongAnswer1) {
  std::vector<int> ratings{1, 2, 87, 87, 87, 2, 1};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 13);
}

TEST(MoreTests, WrongAnswer2) {
  std::vector<int> ratings{1, 3, 4, 5, 2};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 11);
}

TEST(MoreTests, WrongAnswer3) {
  std::vector<int> ratings{1, 6, 10, 8, 7, 3, 2};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 18);
}
