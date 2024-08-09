#include <6/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, OneRow) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{1};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAYPALISHIRING");
}

TEST(MoreTests, TwoRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{2};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PYAIHRNAPLSIIG");
}

TEST(MoreTests, FiveRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{5};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PHASIYIRPLIGAN");
}

TEST(MoreTests, SixRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{6};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PRAIIYHNPSGAIL");
}

TEST(MoreTests, SevenRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{7};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PNAIGYRPIAHLSI");
}

TEST(MoreTests, EightRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{8};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAGYNPIARLIIHS");
}

TEST(MoreTests, NineRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{9};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAYPGANLIIRSIH");
}

TEST(MoreTests, TenRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{10};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAYPALGINSIHRI");
}

TEST(MoreTests, ElevenRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{11};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAYPALISGHNIIR");
}

TEST(MoreTests, TwelveRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{12};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAYPALISHIGRNI");
}

TEST(MoreTests, ThirteenRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{13};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, "PAYPALISHIRIGN");
}

TEST(MoreTests, FourteenRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{14};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, str);
}

TEST(MoreTests, FifteenRows) {
  const std::string str{"PAYPALISHIRING"};
  constexpr auto num_rows{15};
  Solution s{};
  auto result = s.convert(str, num_rows);
  EXPECT_EQ(result, str);
}
