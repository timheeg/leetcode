#include "solution.h"

int Solution::maxProfit(std::vector<int>& prices) {
  if (prices.size() <= 1) return 0;

  int total_profit{0};

  for (auto i = 1U; i < prices.size(); ++i) {
    if (prices[i] < prices[i - 1]) {
      continue;
    }

    // Apply today's change to the tracked profit
    total_profit += prices[i] - prices[i - 1];
  }

  // Apply any profit accumulated before completing the loop
  return total_profit;
}
