#include <104/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  // std::vector<int> values{3, 9, 20, null, null, 15, 7};  // bfs
  std::vector<int> values{3, 9, null, null, 20, 15, null, null, 7};  // dfs
  auto* node = create(values);
  print(node);
  Solution s{};
  auto result = s.maxDepth(node);
  EXPECT_EQ(result, 3);
}

TEST(MoreTest, Case2) {
  // std::vector<int> values{3, 9, 20, null, null, 15, 7};  // bfs
  std::vector<int> values{3,    9,  1,    1,    1,    1,    1,    null,
                          2,    1,  null, null, null, null, null, null,
                          null, 20, 15,   null, null, 7};  // dfs
  auto* node = create(values);
  print(node);
  Solution s{};
  auto result = s.maxDepth(node);
  EXPECT_EQ(result, 9);
}
