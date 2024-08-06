#include <71/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  std::string path = "/home/";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/home");
}

TEST(LeetCodeTest, Case2) {
  std::string path = "/home//foo/";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/home/foo");
}

TEST(LeetCodeTest, Case3) {
  std::string path = "/home/user/Documents/../Pictures";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/home/user/Pictures");
}

TEST(LeetCodeTest, Case4) {
  std::string path = "/.../a/../b/c/../d/./";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/.../b/d");
}

TEST(LeetCodeTest, Case5) {
  std::string path = "/../";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/");
}
