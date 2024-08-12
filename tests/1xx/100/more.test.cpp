#include <100/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::vector<int> p_values{1, 2, null, null, 3};  // dfs
  auto* p = create(p_values);
  std::vector<int> q_values{1, 2, null, null, 3};  // dfs
  auto* q = create(q_values);
  Solution s{};
  auto result = s.isSameTree(p, q);
  EXPECT_EQ(result, true);
}
