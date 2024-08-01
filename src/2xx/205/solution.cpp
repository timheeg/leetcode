#include <205/solution.h>

#include <ranges>
#include <string>
#include <unordered_map>

//
// Intuition:
// Iterate over s. Create a char mapping of s->t.
// As you march over s, if a char doesn't map, you fail.
// However, we also need to know if a letter was already mapped, just under
// a different letter; so we need to keep a reverse lookup map, too.
//

bool Solution::isIsomorphic(std::string s, std::string t) {
  if (s.empty() || std::size(s) != std::size(t)) return false;
  std::unordered_map<char, char> st;
  std::unordered_map<char, char> ts;
  for (auto i : std::views::iota(0u, std::size(s))) {
    if (not st.contains(s[i])) {
      if (ts.contains(t[i])) return false;
      st[s[i]] = t[i];
      ts[t[i]] = s[i];
      continue;
    }
    if (st[s[i]] != t[i]) {
      return false;
    }
  }
  return true;
}
