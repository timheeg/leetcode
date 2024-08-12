#include <100/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> p_values{1, 2, null, null, 3};  // dfs
  auto* p = create(p_values);
  std::vector<int> q_values{1, 2, null, null, 3};  // dfs
  auto* q = create(q_values);
  Solution s{};
  auto result = s.isSameTree(p, q);
  EXPECT_EQ(result, true);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> p_values{1, 2};  // dfs
  auto* p = create(p_values);
  std::vector<int> q_values{1, null, 2};  // dfs
  auto* q = create(q_values);
  Solution s{};
  auto result = s.isSameTree(p, q);
  EXPECT_EQ(result, false);
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> p_values{1, 2, null, null, 1};  // dfs
  auto* p = create(p_values);
  std::vector<int> q_values{1, 1, null, null, 2};  // dfs
  auto* q = create(q_values);
  Solution s{};
  auto result = s.isSameTree(p, q);
  EXPECT_EQ(result, false);
}
