#include <274/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<int> citations = {3, 0, 6, 1, 5};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{3};
  EXPECT_EQ(h, expected);
}

TEST(LeetCodeTest, Case2) {
  std::vector<int> citations = {1, 3, 1};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{1};
  EXPECT_EQ(h, expected);
}

// Not a standard test case.
// Revealed after failed attempt.
TEST(LeetCodeTest, Case3) {
  std::vector<int> citations = {4, 4, 0, 0};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{2};
  EXPECT_EQ(h, expected);
}

// Not a standard test case.
// Revealed after failed attempt.
TEST(LeetCodeTest, Case4) {
  std::vector<int> citations = {1, 7, 9, 4};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{3};
  EXPECT_EQ(h, expected);
}
