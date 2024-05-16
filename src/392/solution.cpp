#include <392/solution.h>

bool Solution::isSubsequence(std::string s, std::string t) {
  auto i = 0u;
  for (auto ch : t) {
    if (ch == s[i]) {
      ++i;
    }
  }
  return i == s.size();
}
