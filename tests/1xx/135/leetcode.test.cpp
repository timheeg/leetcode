#include <135/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> ratings{1, 0, 2};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 5);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> ratings{1, 2, 2};
  Solution s{};
  auto result = s.candy(ratings);
  EXPECT_EQ(result, 4);
}
