#include <383/solution.h>
#include <gtest/gtest.h>

TEST(MoreTest, Case1) {
  auto ransomNote{"a"};
  auto magazine{"b"};
  Solution s{};
  auto result = s.canConstruct(ransomNote, magazine);
  EXPECT_EQ(result, false);
}
