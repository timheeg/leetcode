#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(MoreTests, Empty) {
  std::vector<int> nums = {};
  int k = 3;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {};
  EXPECT_EQ(nums, expected);
}

TEST(MoreTests, OneItem) {
  std::vector<int> nums = {1};
  int k = 3;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {1};
  EXPECT_EQ(nums, expected);
}

TEST(MoreTests, TwoItemsOdd) {
  std::vector<int> nums = {1, 2};
  int k = 9;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {2, 1};
  EXPECT_EQ(nums, expected);
}

TEST(MoreTests, TwoItemsLargeOdd) {
  std::vector<int> nums = {1, 2};
  int k = 12989;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {2, 1};
  EXPECT_EQ(nums, expected);
}

TEST(MoreTests, TwoItemsEven) {
  std::vector<int> nums = {1, 2};
  int k = 8;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {1, 2};
  EXPECT_EQ(nums, expected);
}

TEST(MoreTests, TwoItemsLargeEven) {
  std::vector<int> nums = {1, 2};
  int k = 14738;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected = {1, 2};
  EXPECT_EQ(nums, expected);
}

TEST(MoreTests, LargeListSmallRotation) {
  const auto MaxItems{10000};
  std::vector<int> nums{};
  for (auto i = 1; i <= MaxItems; i++) {
    nums.push_back(i);
  }
#if DUMP_LISTS
  std::cout << "nums: ";
  for (auto i : nums) {
    std::cout << i << ", ";
  }
  std::cout << std::endl;
#endif

  int k = 4;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected{};
  for (auto i = MaxItems - k + 1; i <= MaxItems; i++) {
    expected.push_back(i);
  }
  for (auto i = 1; i <= MaxItems - k; i++) {
    expected.push_back(i);
  }
#if DUMP_LISTS
  std::cout << "expected: ";
  for (auto i : expected) {
    std::cout << i << ", ";
  }
  std::cout << std::endl;
#endif

  EXPECT_EQ(nums, expected);
}

TEST(MoreTests, LargeListLargeRotation) {
  const auto MaxItems{10000};
  std::vector<int> nums{};
  for (auto i = 1; i <= MaxItems; i++) {
    nums.push_back(i);
  }
#if DUMP_LISTS
  std::cout << "nums: ";
  for (auto i : nums) {
    std::cout << i << ", ";
  }
  std::cout << std::endl;
#endif

  int k = 7824;

  Solution s;
  s.rotate(nums, k);

  std::vector<int> expected{};
  for (auto i = MaxItems - k + 1; i <= MaxItems; i++) {
    expected.push_back(i);
  }
  for (auto i = 1; i <= MaxItems - k; i++) {
    expected.push_back(i);
  }
#if DUMP_LISTS
  std::cout << "expected: ";
  for (auto i : expected) {
    std::cout << i << ", ";
  }
  std::cout << std::endl;
#endif

  EXPECT_EQ(nums, expected);
}
