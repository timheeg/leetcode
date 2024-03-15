#include <gtest/gtest.h>
#include <solution.h>

TEST(MoreTests, PrependOne) {
  std::vector<int> nums1 = {2, 0};
  int m = 1;
  std::vector<int> nums2 = {1};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, PrependMany) {
  std::vector<int> nums1 = {4, 0, 0, 0};
  int m = 1;
  std::vector<int> nums2 = {1, 2, 3};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 3, 4};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, AppendOne) {
  std::vector<int> nums1 = {1, 2, 0};
  int m = 2;
  std::vector<int> nums2 = {3};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 3};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, AppendMany) {
  std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  int m = 3;
  std::vector<int> nums2 = {4, 5, 6};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, PrependManyMany) {
  std::vector<int> nums1 = {4, 5, 6, 0, 0, 0};
  int m = 3;
  std::vector<int> nums2 = {1, 2, 3};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, OddEven) {
  std::vector<int> nums1 = {1, 3, 5, 0, 0, 0};
  int m = 3;
  std::vector<int> nums2 = {2, 4, 6};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, EvenOdd) {
  std::vector<int> nums1 = {2, 4, 6, 0, 0, 0};
  int m = 3;
  std::vector<int> nums2 = {1, 3, 5};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 3, 4, 5, 6};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, AllTwos) {
  std::vector<int> nums1 = {2, 2, 2, 0, 0};
  int m = 3;
  std::vector<int> nums2 = {2, 2};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {2, 2, 2, 2, 2};
  EXPECT_EQ(nums1, expected);
}

TEST(MoreTests, Mixed) {
  std::vector<int> nums1 = {2, 5, 0, 0, 0};
  int m = 2;
  std::vector<int> nums2 = {1, 3, 4};
  int n = nums2.size();

  Solution s;
  s.merge(nums1, m, nums2, n);

  std::vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(nums1, expected);
}
