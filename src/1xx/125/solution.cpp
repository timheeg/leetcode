#include <125/solution.h>

#include <algorithm>
#include <cctype>
#include <iostream>

bool Solution::isPalindrome(std::string s) {
  s.erase(std::remove_if(std::begin(s), std::end(s),
                         [](unsigned char c) { return std::isalnum(c) == 0; }),
          std::end(s));
  if (std::empty(s)) return true;
  if (debug)
    std::cout << "erased: " << s << ", length: " << std::size(s) << "\n";
  std::transform(std::begin(s), std::end(s), std::begin(s),
                 [](unsigned char c) { return std::tolower(c); });
  if (debug)
    std::cout << "lowered: " << s << ", length: " << std::size(s) << "\n";

  for (std::size_t i = 0u, j = std::size(s) - 1; i < j; ++i, --j) {
    if (debug) std::cout << "s: " << s << ", length: " << std::size(s) << "\n";
    if (debug)
      std::cout << "s[" << i << "]: " << s[i] << ", s[" << j << "]: " << s[j]
                << "\n";
    if (s[i] != s[j]) return false;
  }
  return true;
}
