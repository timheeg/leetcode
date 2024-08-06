#include <20/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  std::string s = "(";
  Solution sl{};
  auto result = sl.isValid(s);
  EXPECT_EQ(result, false);
}

TEST(MoreTest, Case2) {
  std::string s = "(([({{(){{}}}[([]{})]}[()]){}]{{()}})){()}";
  Solution sl{};
  auto result = sl.isValid(s);
  EXPECT_EQ(result, true);
}

TEST(MoreTest, Case3) {
  std::string s = "(((((([))))))";
  Solution sl{};
  auto result = sl.isValid(s);
  EXPECT_EQ(result, false);
}

TEST(MoreTest, Case4) {
  std::string s = "((((";
  Solution sl{};
  auto result = sl.isValid(s);
  EXPECT_EQ(result, false);
}
