#include <131/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> gas{1, 2, 3, 4, 5};
  std::vector<int> cost{3, 4, 5, 1, 2};
  Solution s{};
  auto result = s.canCompleteCircuit(gas, cost);
  EXPECT_EQ(result, 3);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> gas{2, 3, 4};
  std::vector<int> cost{3, 4, 3};
  Solution s{};
  auto result = s.canCompleteCircuit(gas, cost);
  EXPECT_EQ(result, -1);
}
