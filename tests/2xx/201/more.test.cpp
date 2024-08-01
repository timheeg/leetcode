#include <201/solution.h>
#include <gtest/gtest.h>

#include <chrono>

TEST(MoreTest, Case1) {
  Solution s{};
  auto result = s.rangeBitwiseAnd(1, 1);
  EXPECT_EQ(result, 1);
}

TEST(MoreTest, Case2) {
  Solution s{};
  auto result = s.rangeBitwiseAnd(1, 2);
  EXPECT_EQ(result, 0);
}

TEST(MoreTest, Case3_TimeLimitExceeded) {
  auto start = std::chrono::system_clock::now();
  Solution s{};
  auto result = s.rangeBitwiseAnd(1073741824, 2147483647);
  EXPECT_EQ(result, 1073741824);
  auto duration =
      std::chrono::system_clock::now() - start;
  EXPECT_LT(duration, std::chrono::seconds(1));
}
