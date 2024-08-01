#include <380/solution.h>
#include <gtest/gtest.h>

TEST(LeetCodeTest, Case1) {
  RandomizedSet set{};
  EXPECT_TRUE(set.insert(1));
  EXPECT_FALSE(set.remove(2));
  EXPECT_TRUE(set.insert(2));
  auto result{set.getRandom()};
  EXPECT_TRUE(result == 1 || result == 2);
  EXPECT_TRUE(set.remove(1));
  EXPECT_FALSE(set.insert(2));
  EXPECT_EQ(set.getRandom(), 2);
}
