#include <49/solution.h>

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

//
// Intuition:
// For each string, sort the string.
// Then sort the list of strings.
// Create a map where the key is the sorted string and the value
// is the list of original strings that are anagrams.
// The map can be unordered since the output order does not matter.
//

std::vector<std::vector<std::string>> Solution::groupAnagrams(
    std::vector<std::string>& strs) {
  std::unordered_map<std::string, std::vector<std::string>> groups;
  for (auto s : strs) {
    auto key = s;
    key.erase(std::remove(key.begin(), key.end(), ' '), key.end());
    std::sort(key.begin(), key.end());
    groups[key].emplace_back(s);
  }
  std::vector<std::vector<std::string>> result;
  for (auto group : groups) {
    result.emplace_back(group.second);
  }
  return result;
}
