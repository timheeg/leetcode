#include <141/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::vector<int> values = {};
  ListNode* head = create(values);
  EXPECT_EQ(head, nullptr);
}
