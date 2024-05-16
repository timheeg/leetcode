#include <125/solution.h>
#include <gtest/gtest.h>

TEST(MoreTests, Case1) {
  const std::string str{"A"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, Rotator) {
  const std::string str{"r<o>t.A,Tor"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, Repaper) {
  const std::string str{"r#@e---p   a PeR////////"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, AbleElba) {
  const std::string str{"Able was I - ere I saw Elba"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, Boot) {
  const std::string str{"Too bad—I hid a boot"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, Onward) {
  const std::string str{
      "Are we not drawn onward, we few, drawn onward to new era?"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, JohnTaylor) {
  const std::string str{"Lewd did I live & evil I did dwel"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, Salami) {
  const std::string str{"Go hang a salami, I’m a lasagna hog."};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, SalamiCondensed) {
  const std::string str{"Go hang a salami’m a lasagna hog."};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, Tacocat) {
  const std::string str{"Tacocat"};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}

TEST(MoreTests, DemetriMartin) {
  const std::string str{
      "Dammit I’m mad."
      "Evil is a deed as I live."
      "God, am I reviled? I rise, my bed on a sun, I melt."
      "To be not one man emanating is sad. I piss."
      "Alas, it is so late. Who stops to help?"
      "Man, it is hot. I’m in it. I tell."
      "I am not a devil. I level “Mad Dog”."
      "Ah, say burning is, as a deified gulp,"
      "In my halo of a mired rum tin."
      "I erase many men. Oh, to be man, a sin."
      "Is evil in a clam? In a trap?"
      "No. It is open. On it I was stuck."
      "Rats peed on hope. Elsewhere dips a web."
      "Be still if I fill its ebb."
      "Ew, a spider... eh?"
      "We sleep. Oh no!"
      "Deep, stark cuts saw it in one position."
      "Part animal, can I live? Sin is a name."
      "Both, one… my names are in it."
      "Murder? I’m a fool."
      "A hymn I plug, deified as a sign in ruby ash,"
      "A Goddam level I lived at."
      "On mail let it in. I’m it."
      "Oh, sit in ample hot spots. Oh wet!"
      "A loss it is alas (sip). I’d assign it a name."
      "Name not one bottle minus an ode by me:"
      "“Sir, I deliver. I’m a dog”"
      "Evil is a deed as I live."
      "Dammit I’m mad."};
  Solution s{};
  auto result = s.isPalindrome(str);
  EXPECT_EQ(result, true);
}
