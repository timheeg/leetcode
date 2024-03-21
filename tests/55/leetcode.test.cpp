#include <55/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums = {2, 3, 1, 1, 4};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums = {3, 2, 1, 0, 4};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{false};
  EXPECT_EQ(canJump, expected);
}

// Not a standard test case.
// Revealed after failed attempt.
TEST(LeetCodeTest, Case3) {
  std::vector<int> nums = {3, 0, 8, 2, 0, 0, 1};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}
