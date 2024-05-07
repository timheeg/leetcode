#include <14/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Empty) {
  std::vector<std::string> strs{};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "");
}

TEST(MoreTests, One) {
  std::vector<std::string> strs{"one"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "one");
}

TEST(MoreTests, OneMore) {
  std::vector<std::string> strs{"one", "ones"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "one");
}

TEST(MoreTests, OneMany) {
  std::vector<std::string> strs{"onead", "one", "ones", "oneeeee", "oneaxk"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "one");
}

TEST(MoreTests, Long) {
  std::vector<std::string> strs{"antidisestablishmentarianism"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "antidisestablishmentarianism");
}

TEST(MoreTests, LongMore) {
  std::vector<std::string> strs{"antidisestablishmentarianism",
                                "antidisestablishmentarianisms"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "antidisestablishmentarianism");
}

TEST(MoreTests, LongSeveral) {
  std::vector<std::string> strs{"antidisestablishmentarianism",
                                "antidisestablishmentarianismz",
                                "antidisestablishmentarianisms"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "antidisestablishmentarianism");
}

TEST(MoreTests, LongMany) {
  std::vector<std::string> strs{"antidisestablishmentarianismte",
                                "antidisestablishmentarianismzra",
                                "antidisestablishmentarianisms"};
  Solution s{};
  auto prefix = s.longestCommonPrefix(strs);
  EXPECT_EQ(prefix, "antidisestablishmentarianism");
}
