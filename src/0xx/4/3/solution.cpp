#include <3/solution.h>

#include <unordered_map>
#include <vector>

//
// Intuition:
// Use Sliding Window Algorithm (SWA).
// Keep track of the characters encountered to check uniqueness, perhaps a
// hash of the character and its count.
//

int Solution::lengthOfLongestSubstring(std::string s) {
  auto max_length{0u};
  auto start{0u};
  std::unordered_map<char, int> unique;
  for (auto end{0u}; end < std::size(s); ++end) {
    while (unique.contains(s[end]) && start <= end) {
      unique[s[start]]--;
      if (unique[s[start]] == 0) unique.erase(s[start]);
      start++;
    }
    unique[s[end]] = 1;
    max_length = std::max(max_length, end - start + 1);
  }
  return max_length;
}
