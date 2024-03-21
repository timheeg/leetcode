#include <gtest/gtest.h>
#include <solution.h>

TEST(MoreTests, Empty) {
  std::vector<int> prices = {};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{0};
  EXPECT_EQ(profit, expected);
}

TEST(MoreTests, AllDownUpEnd) {
  std::vector<int> prices = {6, 5, 3, 1, 2};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{1};
  EXPECT_EQ(profit, expected);
}

TEST(MoreTests, AllUpBigDeltaEnd) {
  std::vector<int> prices = {3, 4, 5, 6, 7, 8, 9, 10, 1, 9};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{15};
  EXPECT_EQ(profit, expected);
}

TEST(MoreTests, StairsUp) {
  std::vector<int> prices = {5, 2, 4, 6, 3, 5, 7, 4, 6, 8, 5, 7, 9, 6};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{16};
  EXPECT_EQ(profit, expected);
}

TEST(MoreTests, StairsDown) {
  std::vector<int> prices = {6, 9, 7, 5, 8, 6, 4, 7, 5, 3, 6, 4, 2, 5};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{15};
  EXPECT_EQ(profit, expected);
}

TEST(MoreTests, JumpsUp) {
  std::vector<int> prices = {1, 3, 5, 4, 6, 8, 7, 9, 11, 10, 12, 14};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{16};
  EXPECT_EQ(profit, expected);
}

TEST(MoreTests, DropsDown) {
  std::vector<int> prices = {14, 12, 10, 11, 9, 7, 8, 6, 4, 5, 3, 1};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{3};
  EXPECT_EQ(profit, expected);
}

TEST(MoreTests, BigDropsWithGains) {
  std::vector<int> prices = {13, 14, 15, 4, 6, 8, 10, 12, 1, 3, 5};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{14};
  EXPECT_EQ(profit, expected);
}
