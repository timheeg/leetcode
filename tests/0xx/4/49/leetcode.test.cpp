#include <49/solution.h>
#include <gtest/gtest.h>

#include "check.h"

TEST(LeetCodeTest, Case1) {
  std::vector<std::string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
  Solution s{};
  auto result = s.groupAnagrams(strs);
  std::vector<std::vector<std::string>> expected{
      {"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}};
  EXPECT_TRUE(is_equal(result, expected));
}

TEST(LeetCodeTest, Case2) {
  std::vector<std::string> strs{""};
  Solution s{};
  auto result = s.groupAnagrams(strs);
  std::vector<std::vector<std::string>> expected{{""}};
  EXPECT_TRUE(is_equal(result, expected));
}

TEST(LeetCodeTest, Case3) {
  std::vector<std::string> strs{"a"};
  Solution s{};
  auto result = s.groupAnagrams(strs);
  std::vector<std::vector<std::string>> expected{{"a"}};
  EXPECT_TRUE(is_equal(result, expected));
}
