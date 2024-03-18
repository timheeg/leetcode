#include "solution.h"

int Solution::maxProfit(std::vector<int>& prices) {
  if (prices.size() <= 1) return 0;

  int max_profit{0};
  int min{prices[0]};

  int profit{0};
  for (auto i = 1U; i < prices.size(); ++i) {
    if (prices[i] < min) {
      min = prices[i];
      profit = 0;
      continue;
    }

    // Apply today's change to the tracked profit
    profit += prices[i] - prices[i - 1];

    max_profit = std::max(profit, max_profit);
  }

  return max_profit;
}
