#include <92/solution.h>
#include <gtest/gtest.h>

#include <vector>

TEST(LeetCodeTest, Case1) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto left{2}, right{4};
  Solution sl{};
  auto result = sl.reverseBetween(head, left, right);
  std::vector<int> expected_values = {1, 4, 3, 2, 5};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> values = {5};
  ListNode* head = create(values);
  auto left{1}, right{1};
  Solution sl{};
  auto result = sl.reverseBetween(head, left, right);
  EXPECT_TRUE(equal(result, head));
}
