#include <92/solution.h>
#include <gtest/gtest.h>

#include <vector>

TEST(MoreTest, Case1) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto left{1}, right{4};
  Solution sl{};
  auto result = sl.reverseBetween(head, left, right);
  std::vector<int> expected_values = {4, 3, 2, 1, 5};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(MoreTest, Case2) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto left{4}, right{5};
  Solution sl{};
  auto result = sl.reverseBetween(head, left, right);
  std::vector<int> expected_values = {1, 2, 3, 5, 4};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(MoreTest, Case3) {
  std::vector<int> values = {1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto left{1}, right{5};
  Solution sl{};
  auto result = sl.reverseBetween(head, left, right);
  std::vector<int> expected_values = {5, 4, 3, 2, 1};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(MoreTest, Case4) {
  std::vector<int> values = {
      1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1,
      2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2,
      3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3,
      4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4,
      5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
  ListNode* head = create(values);
  auto left{2}, right{100};
  Solution sl{};
  auto result = sl.reverseBetween(head, left, right);
  std::vector<int> expected_values = {
      1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1,
      5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5,
      4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4,
      3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3,
      2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 5, 4, 3, 2, 1, 2, 3, 4, 5};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}
