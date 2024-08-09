#include <19/solution.h>
#include <gtest/gtest.h>

#include <vector>

TEST(LeetCodeTest, Case1) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto n{2};
  Solution sl{};
  auto result = sl.removeNthFromEnd(head, n);
  std::vector<int> expected_values = {1, 2, 3, 5};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> values = {1};
  ListNode* head = create(values);
  auto n{1};
  Solution sl{};
  auto result = sl.removeNthFromEnd(head, n);
  ListNode* expected = create({});
EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto n{2};
  Solution sl{};
  auto result = sl.removeNthFromEnd(head, n);
  std::vector<int> expected_values = {1, 2, 3, 5};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}
