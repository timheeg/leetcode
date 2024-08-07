#include <2/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> l1_values = {2, 4, 3};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {5, 6, 4};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.addTwoNumbers(l1, l2);
  std::vector<int> expected_values = {7, 0, 8};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> l1_values = {0};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {0};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.addTwoNumbers(l1, l2);
  std::vector<int> expected_values = {0};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> l1_values = {9, 9, 9, 9, 9, 9, 9};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {9, 9, 9, 9};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.addTwoNumbers(l1, l2);
  std::vector<int> expected_values = {8, 9, 9, 9, 0, 0, 0, 1};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}
