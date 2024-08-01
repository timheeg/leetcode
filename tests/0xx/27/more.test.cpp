#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(MoreTests, Empty) {
  std::vector<int> nums = {};
  int val = 0;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, ResultEmpty) {
  std::vector<int> nums = {1};
  int val = 1;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, RemoveAll) {
  std::vector<int> nums = {1, 1, 1, 1};
  int val = 1;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, RemoveAllBefore) {
  std::vector<int> nums = {1, 1, 1, 2};
  int val = 1;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {2};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, RemoveAllAfter) {
  std::vector<int> nums = {1, 2, 2, 2};
  int val = 2;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {1};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, RemoveEveryOther) {
  std::vector<int> nums = {1, 2, 0, 2, 1, 2, 3};
  int val = 2;

  Solution s;
  auto k = s.removeElement(nums, val);

  std::vector<int> expected = {0, 1, 1, 3};
  EXPECT_EQ(k, expected.size());
  std::sort(std::begin(nums), std::end(nums));
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}
