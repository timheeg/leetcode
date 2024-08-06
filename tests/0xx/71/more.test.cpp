#include <71/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::string path = "/home/..././a/./../";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/home/...");
}

TEST(MoreTest, Case2) {
  std::string path = "/";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/");
}

TEST(MoreTest, Case3) {
  std::string path = "/home";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/home");
}

TEST(MoreTest, Case4) {
  std::string path = "/home/user/.ssh/_1/";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/home/user/.ssh/_1");
}

TEST(MoreTest, Case5) {
  std::string path = "////..///../..//.///";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/");
}

TEST(MoreTest, Case6) {
  std::string path = "/a//b////c/d//././/..";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/a/b/c");
}

TEST(MoreTest, Case7) {
  std::string path = "/..";
  Solution sl{};
  auto result = sl.simplifyPath(path);
  EXPECT_EQ(result, "/");
}
