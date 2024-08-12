#include <226/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> values{
      4, 2, 1, null, null, 3, null, null, 7, 6, null, null, 9, null, null,
  };  // dfs
  auto* root = create(values);
  print(root);
  Solution s{};
  auto result = s.invertTree(root);
  std::vector<int> expected_values{
      4, 7, 9, null, null, 6, null, null, 2, 3, null, null, 1, null, null,
  };  // dfs
  auto* expected = create(expected_values);
  print(expected);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> values{2, 1, null, null, 3};  // dfs
  auto* root = create(values);
  Solution s{};
  auto result = s.invertTree(root);
  std::vector<int> expected_values{2, 3, null, null, 1};  // dfs
  auto* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> values{};  // dfs
  auto* root = create(values);
  Solution s{};
  auto result = s.invertTree(root);
  EXPECT_TRUE(equal(result, root));
}
