#include <138/solution.h>
#include <gtest/gtest.h>

#include <vector>

TEST(LeetCodeTest, Case1) {
  std::vector<std::vector<int>> values{
      {7, null}, {13, 0}, {11, 4}, {10, 2}, {1, 0}};
  Node* head = create(values);
  print(head);
  Solution s{};
  auto result = s.copyRandomList(head);
  print(result);
  EXPECT_FALSE(equal(head, result));
}
