#include <13/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, One) {
  constexpr auto roman{"I"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 1);
}

TEST(MoreTests, Five) {
  constexpr auto roman{"V"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 5);
}

TEST(MoreTests, Ten) {
  constexpr auto roman{"X"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 10);
}

TEST(MoreTests, Fifty) {
  constexpr auto roman{"L"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 50);
}

TEST(MoreTests, Hundred) {
  constexpr auto roman{"C"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 100);
}

TEST(MoreTests, FiveHundred) {
  constexpr auto roman{"D"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 500);
}

TEST(MoreTests, Thousand) {
  constexpr auto roman{"M"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 1000);
}

TEST(MoreTests, Three) {
  constexpr auto roman{"III"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 3);
}

TEST(MoreTests, Four) {
  constexpr auto roman{"IV"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 4);
}

TEST(MoreTests, Six) {
  constexpr auto roman{"VI"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 6);
}

TEST(MoreTests, Seven) {
  constexpr auto roman{"VII"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 7);
}

TEST(MoreTests, Eight) {
  constexpr auto roman{"VIII"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 8);
}

TEST(MoreTests, Nine) {
  constexpr auto roman{"IX"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 9);
}

TEST(MoreTests, Fourteen) {
  constexpr auto roman{"XIV"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 14);
}

TEST(MoreTests, Nineteen) {
  constexpr auto roman{"XIX"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 19);
}

TEST(MoreTests, FourtyNine) {
  constexpr auto roman{"XLIX"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 49);
}

TEST(MoreTests, NinetyNine) {
  constexpr auto roman{"XCIX"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 99);
}

TEST(MoreTests, FourNinetyFour) {
  constexpr auto roman{"CDXCIV"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 494);
}

TEST(MoreTests, EightEightyEight) {
  constexpr auto roman{"DCCCLXXXVIII"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 888);
}

TEST(MoreTests, NineNinetyNine) {
  constexpr auto roman{"CMXCIX"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 999);
}

TEST(MoreTests, EightThousand) {
  constexpr auto roman{"MMMMMMMM"};
  Solution s{};
  auto result = s.romanToInt(std::string(roman));
  EXPECT_EQ(result, 8000);
}
