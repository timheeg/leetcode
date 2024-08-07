#include <141/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> values = {3, 2, 0, -4};
  auto pos{1};
  ListNode* head = create(values);
  connect(head, pos);
  Solution s{};
  auto result = s.hasCycle(head);
  EXPECT_EQ(result, true);
  EXPECT_TRUE(true);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> values = {3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4,
                             3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4,
                             3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4,
                             3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4,
                             3, 2, 0, -4, 3, 2, 0, -4, 3, 2, 0, -4};
  auto pos{70};
  ListNode* head = create(values);
  connect(head, pos);
  Solution s{};
  auto result = s.hasCycle(head);
  EXPECT_EQ(result, true);
  EXPECT_TRUE(true);
}
