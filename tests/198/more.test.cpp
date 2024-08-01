#include <198/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::vector<int> nums{1, 9};
  Solution s{};
  auto result = s.rob(nums);
  EXPECT_EQ(result, 9);
}

TEST(MoreTest, Case2) {
  std::vector<int> nums{1, 2, 3, 4, 9};
  Solution s{};
  auto result = s.rob(nums);
  EXPECT_EQ(result, 13);
}

TEST(MoreTest, Case3) {
  std::vector<int> nums{1, 2, 1, 4, 4, 9};
  Solution s{};
  auto result = s.rob(nums);
  EXPECT_EQ(result, 15);
}

TEST(MoreTest, Case4) {
  std::vector<int> nums{1, 3, 1, 4, 6, 1, 9};
  Solution s{};
  auto result = s.rob(nums);
  EXPECT_EQ(result, 18);
}
