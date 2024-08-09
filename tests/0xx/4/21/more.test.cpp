#include <21/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::vector<int> l1_values = {9, 9, 9, 9};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {1};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.mergeTwoLists(l1, l2);
  std::vector<int> expected_values = {1, 9, 9, 9, 9};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}

TEST(MoreTest, Case2) {
  std::vector<int> l1_values = {1};
  ListNode* l1 = create(l1_values);
  std::vector<int> l2_values = {9, 9, 9, 9};
  ListNode* l2 = create(l2_values);
  Solution s{};
  auto result = s.mergeTwoLists(l1, l2);
  std::vector<int> expected_values = {1, 9, 9, 9, 9};
  ListNode* expected = create(expected_values);
  EXPECT_TRUE(equal(result, expected));
}
