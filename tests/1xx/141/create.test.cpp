#include <141/solution.h>
#include <gtest/gtest.h>

TEST(CreateTest, Case1) {
  std::vector<int> values = {};
  ListNode* head = create(values);
  EXPECT_EQ(head, nullptr);
}

TEST(CreateTest, Case2) {
  std::vector<int> values = {3, 2, 0, -4};
  ListNode* head = create(values);
  for (auto value : values) {
    EXPECT_NE(head, nullptr);
    EXPECT_EQ(head->val, value);
    head = head->next;
  }
  EXPECT_EQ(head, nullptr);
}

TEST(CreateTest, Case3) {
  std::vector<int> values = {3};
  ListNode* head = create(values);
  for (auto value : values) {
    EXPECT_NE(head, nullptr);
    EXPECT_EQ(head->val, value);
    head = head->next;
  }
  EXPECT_EQ(head, nullptr);
}

TEST(CreateTest, Case4) {
  std::vector<int> values = {3};
  ListNode* head = create(values);
  connect(head, 0);
  for (auto value : values) {
    EXPECT_NE(head, nullptr);
    EXPECT_EQ(head->val, value);
    head = head->next;
  }
  EXPECT_NE(head, nullptr);
}
