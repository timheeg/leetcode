#include <55/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Empty) {
  std::vector<int> nums = {};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, OneItem) {
  std::vector<int> nums = {0};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, OneItemAny) {
  std::vector<int> nums = {213};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, AllOnes) {
  std::vector<int> nums = {1, 1, 1, 1, 1, 1};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, ZeroInTheMiddleOnlyOnes) {
  std::vector<int> nums = {1, 1, 0, 1, 1, 1};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{false};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, ZeroLastJump) {
  std::vector<int> nums = {2, 0, 1, 4, 0, 0, 0, 0, 2};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{false};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, ZeroFirstJump) {
  std::vector<int> nums = {0, 1, 2, 5};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{false};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, BigFirstJump) {
  std::vector<int> nums = {14, 1, 2, 5};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, AvoidZero) {
  std::vector<int> nums = {1, 2, 5, 0, 1, 7, 2, 0, 3};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, CantAvoidZero) {
  std::vector<int> nums = {1, 2, 5, 0, 3, 2, 1, 0, 3};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{false};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, MultipleBacktracks) {
  std::vector<int> nums = {2, 2, 5, 5, 3, 2, 1, 0, 3, 3, 1, 0, 1};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, MultipleBacktracksFinishesEarly) {
  std::vector<int> nums = {2, 2, 5, 5, 3, 2, 1, 0, 3, 17, 1, 0, 1};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}

TEST(MoreTests, MultipleBacktracksAfterInitialTrap) {
  std::vector<int> nums = {2, 2, 5, 18, 4, 2, 1, 0, 2, 2, 1, 0, 1};

  Solution s;
  auto canJump = s.canJump(nums);

  auto expected{true};
  EXPECT_EQ(canJump, expected);
}
