#include <21/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> l1_values = {1, 2, 4};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {1, 3, 4};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.mergeTwoLists(l1, l2);
  std::vector<int> expected_values = {1, 1, 2, 3, 4, 4};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> l1_values = {};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.mergeTwoLists(l1, l2);
  std::vector<int> expected_values = {};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> l1_values = {};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {0};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.mergeTwoLists(l1, l2);
  std::vector<int> expected_values = {0};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}
