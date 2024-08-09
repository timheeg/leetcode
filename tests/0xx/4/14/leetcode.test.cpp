#include <14/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::vector<std::string> strs{"flower", "flow", "flight"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "fl");
}

TEST(LeetCodeTest, Case2) {
  std::vector<std::string> strs{"dog", "racecar", "car"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "");
}
