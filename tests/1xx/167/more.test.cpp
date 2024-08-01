#include <167/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Empty) {
  std::vector<int> numbers{0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
                           2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4,
                           4, 4, 4, 4, 4, 4, 5, 6, 6, 6, 6, 6};
  auto target{11};
  Solution s{};
  auto result = s.twoSum(numbers, target);
  std::vector<int> expected{31, 36};
  EXPECT_EQ(result, expected);
}
