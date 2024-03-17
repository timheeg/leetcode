#include <gtest/gtest.h>
#include <solution.h>

#include <cassert>

TEST(MoreTests, Empty) {
  std::vector<int> nums = {};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, OneItem) {
  std::vector<int> nums = {1};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, SameItem) {
  std::vector<int> nums = {1, 1};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 1};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, SameItem3Times) {
  std::vector<int> nums = {1, 1, 1};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 1};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, SameItemABunch) {
  std::vector<int> nums = {1, 1, 1, 1, 1, 1, 1};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 1};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, AllDoubled) {
  std::vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 1, 2, 2, 3, 3, 4, 4};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, AllMultiples) {
  std::vector<int> nums = {1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 1, 2, 2, 3, 3, 4, 4};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, NoDups) {
  std::vector<int> nums = {1, 2};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 2};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, NoDupsLonger) {
  std::vector<int> nums = {1, 2, 3, 4, 5, 6};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, AllDupsButLast) {
  std::vector<int> nums = {1, 1, 1, 1, 1, 2};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 1, 2};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}

TEST(MoreTests, AllDupsButFirst) {
  std::vector<int> nums = {1, 2, 2, 2, 2, 2};

  Solution s;
  auto k = s.removeDuplicates(nums);

  std::vector<int> expected = {1, 2, 2};
  EXPECT_EQ(k, expected.size());
  for (int i = 0; i < k; i++) {
    assert(nums[i] == expected[i]);
  }
}
