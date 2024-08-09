#include <49/solution.h>
#include <gtest/gtest.h>

#include "check.h"

TEST(MoreTest, Case1) {
  std::vector<std::string> strs{"i am a weakish speller", "the eyes",
                                "a decimal point",        "william shakespeare",
                                "im a dot in place",      "they see"};
  Solution s{};
  auto result = s.groupAnagrams(strs);
  std::vector<std::vector<std::string>> expected{
      {
          "i am a weakish speller",
          "william shakespeare",
      },
      {"the eyes", "they see"},
      {"a decimal point", "im a dot in place"}};
  EXPECT_TRUE(is_equal(result, expected));
}
