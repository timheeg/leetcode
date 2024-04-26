#include <238/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Stuff) {
  std::vector<int> nums = {-1, 4, 1, 2, 8, -1, -3, 4};
  Solution s;
  auto result = s.productExceptSelf(nums);
  std::vector<int> expected = {768, -192, -768, -384, -96, 768, 256, -192};
  EXPECT_EQ(result, expected);
}
