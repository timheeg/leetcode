#include <274/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Empty) {
  std::vector<int> citations = {};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{0};
  EXPECT_EQ(h, expected);
}

TEST(MoreTests, One) {
  std::vector<int> citations = {1};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{1};
  EXPECT_EQ(h, expected);
}

TEST(MoreTests, OneBig) {
  std::vector<int> citations = {100};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{1};
  EXPECT_EQ(h, expected);
}

TEST(MoreTests, Seven) {
  std::vector<int> citations = {0, 0, 0, 0, 0, 1,  1,  1,  1,  2,  2,
                                2, 2, 2, 3, 7, 14, 23, 28, 34, 48, 122};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{7};
  EXPECT_EQ(h, expected);
}

TEST(MoreTests, ManyLarge) {
  std::vector<int> citations = {100, 200, 300, 121, 99, 500, 177};

  Solution s;
  auto h = s.hIndex(citations);

  auto expected{7};
  EXPECT_EQ(h, expected);
}
