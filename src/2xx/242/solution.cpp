#include <242/solution.h>

#include <algorithm>
#include <string>
#include <unordered_map>

//
// Intuition:
// Create a hash of t letters and counts.
// Iterator over s and draw from the t hash, reducing count, removing letter.
// If not available, or if the hash is not empty when finished, then no good.
//

bool map_check(std::string s, std::string t) {
  std::unordered_map<char, int> tmap{};
  std::for_each(t.begin(), t.end(), [&tmap](auto letter) {
    if (letter == ' ') return;
    if (not tmap.contains(letter)) {
      tmap[letter] = 1;
      return;
    }
    tmap[letter]++;
  });
  for (auto letter : s) {
    if (letter == ' ') continue;
    if (not tmap.contains(letter)) return false;
    tmap[letter]--;
    if (tmap[letter] == 0) tmap.erase(letter);
  }
  return tmap.empty();
}

//
// Intuition:
// Instead of using hashes, just sort s and t and they should be equal.
//
bool sort_check(std::string s, std::string t) {
  s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
  t.erase(std::remove(t.begin(), t.end(), ' '), t.end());
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end());
  return s == t;
}

bool Solution::isAnagram(std::string s, std::string t) {
#if 0
  return map_check(s, t);
#else
  return sort_check(s, t);
#endif
}
