#include <11/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::vector<int> height{1, 1};
  Solution s{};
  auto result = s.maxArea(height);
  EXPECT_EQ(result, 1);
}

TEST(MoreTest, Case2) {
  std::vector<int> height{1, 1, 1, 1, 15, 14, 1, 1, 1, 1, 1, 1};
  Solution s{};
  auto result = s.maxArea(height);
  EXPECT_EQ(result, 14);
}

TEST(MoreTest, Case3) {
  std::vector<int> height{1, 1, 1, 1, 10, 10, 1, 1, 1,
                          1, 1, 1, 1, 1,  1,  1, 2, 1};
  Solution s{};
  auto result = s.maxArea(height);
  EXPECT_EQ(result, 24);
}

TEST(MoreTest, Case4_Wrong) {
  std::vector<int> height{
      76,  155, 15,  188, 180, 154, 84,  34,  187, 142, 22,  5,   27,  183, 111,
      128, 50,  58,  2,   112, 179, 2,   100, 111, 115, 76,  134, 120, 118, 103,
      31,  146, 58,  198, 134, 38,  104, 170, 25,  92,  112, 199, 49,  140, 135,
      160, 20,  185, 171, 23,  98,  150, 177, 198, 61,  92,  26,  147, 164, 144,
      51,  196, 42,  109, 194, 177, 100, 99,  99,  125, 143, 12,  76,  192, 152,
      11,  152, 124, 197, 123, 147, 95,  73,  124, 45,  86,  168, 24,  34,  133,
      120, 85,  81,  163, 146, 75,  92,  198, 126, 191};
  Solution s{};
  auto result = s.maxArea(height);
  EXPECT_EQ(result, 18048);
}
