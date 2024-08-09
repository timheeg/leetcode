#include <19/solution.h>
#include <gtest/gtest.h>

#include <vector>

TEST(MoreTest, Case1) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto n{2};
  Solution sl{};
  auto result = sl.removeNthFromEnd(head, n);
  std::vector<int> expected_values = {1, 2, 3, 5};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(MoreTest, Case2) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto n{5};
  Solution sl{};
  auto result = sl.removeNthFromEnd(head, n);
  std::vector<int> expected_values = {2, 3, 4, 5};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}
