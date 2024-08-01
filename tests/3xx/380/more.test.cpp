#include <380/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Insert20) {
  RandomizedSet set{};
  for (auto i{0U}; i < 40U; ++i) {
    if (i % 6 == 0) {
      set.remove(i - 1);
      continue;
    }
    set.insert(i);
  }
}

TEST(MoreTests, TBD) {
  RandomizedSet set{};
  for (auto i{0U}; i < 20000U; ++i) {
    if (i % 15 == 0) {
      set.remove(i - 1);
      continue;
    }
    set.insert(i);
  }
}

TEST(MoreTests, LC15) {
  RandomizedSet set{};
  EXPECT_TRUE(set.insert(0));
  EXPECT_TRUE(set.insert(1));
  print(set.vector);
  print(set.map);
  EXPECT_TRUE(set.remove(0));
  print(set.vector);
  print(set.map);
  EXPECT_TRUE(set.insert(2));
  print(set.vector);
  print(set.map);
  EXPECT_TRUE(set.remove(1));
  print(set.vector);
  print(set.map);
  EXPECT_EQ(set.getRandom(), 2);
}
