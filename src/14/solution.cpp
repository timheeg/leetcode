#include <14/solution.h>

#include <map>

//
// Intuition: Compare each string. You can't get any longer, only shorter.
// If you are comparing a matching prefix and get to the min prefix length,
// then you can stop comparing.
//

std::string longestPrefix(const std::string& s1, const std::string& s2) {
  std::string prefix{""};
  for (auto i = 0u; i < s1.size() && i < s2.size(); ++i) {
    if (s1.at(i) != s2.at(i)) break;
    prefix += s1.at(i);
  }
  return prefix;
}

std::string Solution::longestCommonPrefix(std::vector<std::string>& strs) {
  using length_t = int;
  using index_t = int;
  std::map<length_t, std::vector<index_t>> by_length{};
  for (auto i = 0u; i < strs.size(); ++i) {
    auto s = strs.at(i);
    if (s.empty()) return "";
    by_length[s.size()].push_back(i);
  }

  std::string longest_prefix{""};

  for (const auto& [length, indexes] : by_length) {
    for (auto i = 0u; i < indexes.size(); ++i) {
      if (longest_prefix.empty()) {
        longest_prefix = strs.at(indexes[i]);
        continue;
      }
      std::string str = strs.at(indexes[i]);
      longest_prefix = longestPrefix(str, longest_prefix);
      if (longest_prefix.empty()) return longest_prefix;
    }
  }

  return longest_prefix;
}
