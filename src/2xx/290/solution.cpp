#include <290/solution.h>

#include <algorithm>
#include <ranges>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

//
// Intuition:
// Tokenize string.
// Create a map between pattern letter and word.
// However, we also need a reverse lookup to find when a word has already been
// mapped to a different letter.
//

std::vector<std::string> tokenize(std::string_view s, const char delim) {
  std::vector<std::string> words{};
  for (auto it = s.find(delim); it != std::string_view::npos;
       it = s.find(delim)) {
    words.emplace_back(s, 0, it);
    s.remove_prefix(it + 1);
  }
  if (not s.empty()) words.emplace_back(s);
  return words;
}

bool Solution::wordPattern(std::string pattern, std::string s) {
  if (pattern.empty() || s.empty()) return false;
  auto words = tokenize(s, ' ');
  if (std::size(pattern) != std::size(words)) return false;
  std::unordered_map<char, std::string_view> pw{};
  std::unordered_map<std::string_view, char> wp{};
  for (auto i : std::ranges::views::iota(0u, std::size(pattern))) {
    if (not pw.contains(pattern[i])) {
      if (wp.contains(words[i])) {
        return false;
      }
      pw[pattern[i]] = words[i];
      wp[words[i]] = pattern[i];
      continue;
    }
    if (pw[pattern[i]] != words[i]) return false;
  }
  return true;
}
