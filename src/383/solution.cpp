#include <383/solution.h>

#include <string>
#include <unordered_map>

//
// Intuition:
// Build a hash of magazine letters and counts.
// Then iterator over ransom note and decrement the magazine count.
//

bool Solution::canConstruct(std::string ransomNote, std::string magazine) {
  std::unordered_map<char, int> available{};
  for (auto letter : magazine) {
    available[letter] += 1;
  }
  for (auto letter : ransomNote) {
    if (not available.contains(letter)) {
      return false;
    }
    if (available[letter] == 0) {
      return false;
    }
    available[letter] -= 1;
  }
  return true;
}
