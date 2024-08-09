#include <12/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, One) {
  constexpr auto num{1};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "I");
}

TEST(MoreTests, Five) {
  constexpr auto num{5};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "V");
}

TEST(MoreTests, Ten) {
  constexpr auto num{10};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "X");
}

TEST(MoreTests, Fifty) {
  constexpr auto num{50};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "L");
}

TEST(MoreTests, Hundred) {
  constexpr auto num{100};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "C");
}

TEST(MoreTests, FiveHundred) {
  constexpr auto num{500};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "D");
}

TEST(MoreTests, Thousand) {
  constexpr auto num{1000};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "M");
}

TEST(MoreTests, Three) {
  constexpr auto num{3};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "III");
}

TEST(MoreTests, Four) {
  constexpr auto num{4};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "IV");
}

TEST(MoreTests, Six) {
  constexpr auto num{6};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "VI");
}

TEST(MoreTests, Seven) {
  constexpr auto num{7};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "VII");
}

TEST(MoreTests, Eight) {
  constexpr auto num{8};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "VIII");
}

TEST(MoreTests, Nine) {
  constexpr auto num{9};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "IX");
}

TEST(MoreTests, Fourteen) {
  constexpr auto num{14};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "XIV");
}

TEST(MoreTests, Nineteen) {
  constexpr auto num{19};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "XIX");
}

TEST(MoreTests, FourtyNine) {
  constexpr auto num{49};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "XLIX");
}

TEST(MoreTests, NinetyNine) {
  constexpr auto num{99};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "XCIX");
}

TEST(MoreTests, FourNinetyFour) {
  constexpr auto num{494};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "CDXCIV");
}

TEST(MoreTests, EightEightyEight) {
  constexpr auto num{888};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "DCCCLXXXVIII");
}

TEST(MoreTests, NineNinetyNine) {
  constexpr auto num{999};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "CMXCIX");
}

TEST(MoreTests, FourThousand) {
  constexpr auto num{4000};
  Solution s{};
  auto roman = s.intToRoman(num);
  EXPECT_EQ(roman, "MMMM");
}
