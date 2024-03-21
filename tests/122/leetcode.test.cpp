#include <gtest/gtest.h>
#include <solution.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> prices = {7, 1, 5, 3, 6, 4};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{7};
  EXPECT_EQ(profit, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> prices = {1, 2, 3, 4, 5};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{4};
  EXPECT_EQ(profit, expected);
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> prices = {7, 6, 4, 3, 1};

  Solution s;
  auto profit = s.maxProfit(prices);

  int expected{0};
  EXPECT_EQ(profit, expected);
}
