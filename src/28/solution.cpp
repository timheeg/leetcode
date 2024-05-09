#include <28/solution.h>

//
// Intuition:
// Look at all (unique) haystack substrings of size needle size.
// Check if the needle hash is in the set of hashes.
//

int Solution::strStr(std::string haystack, std::string needle) {
  if (needle.size() > haystack.size()) return -1;

  for (auto i = 0u; i <= haystack.size() - needle.size(); ++i) {
    if (haystack.substr(i, needle.size()) == needle) return i;
  }
  return -1;
}
