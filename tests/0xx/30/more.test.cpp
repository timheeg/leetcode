#include <30/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto s{"barfoothefoobarman"};
  std::vector<std::string> words{"foo", "bar"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{0, 9};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case2) {
  auto s{"wordgoodgoodgoodbestword"};
  std::vector<std::string> words{"word", "good", "best", "good"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{8};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case3) {
  auto s{"lingmindraboofooowingdingbarrwingmonkeypoundcake"};
  std::vector<std::string> words{"fooo", "barr", "wing", "ding", "wing"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{13};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case4) {
  auto s{"abababab"};
  std::vector<std::string> words{"ab", "ab", "ab"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{0, 2};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case5) {
  auto s{"ababaab"};
  std::vector<std::string> words{"ab", "ba", "ba"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{1};
  EXPECT_EQ(result, expected);
}

TEST(MoreTest, Case6) {
  auto s{"abababab"};
  std::vector<std::string> words{"ab", "ba"};
  Solution sl{};
  auto result = sl.findSubstring(s, words);
  std::vector<int> expected{};
  EXPECT_EQ(result, expected);
}
