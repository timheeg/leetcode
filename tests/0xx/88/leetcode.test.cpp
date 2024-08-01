#include <gtest/gtest.h>
#include <solution.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  int m = 3;
  std::vector<int> nums2 = {2, 5, 6};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 2, 3, 5, 6};
  EXPECT_EQ(nums1, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> nums1 = {1};
  int m = nums1.size();
  std::vector<int> nums2 = {};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1};
  EXPECT_EQ(nums1, expected);
}

TEST(LeetCodeTest, Case3) {
  std::vector<int> nums1 = {0};
  int m = 0;
  std::vector<int> nums2 = {1};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1};
  EXPECT_EQ(nums1, expected);
}
