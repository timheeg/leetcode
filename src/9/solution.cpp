#include <9/solution.h>

#include <string>

bool Solution::isPalindrome(int x) {
  if (x < 0) return false;
  auto value = std::to_string(x);
  for (auto i = 0lu, j = value.size() - 1; i < j; ++i, --j) {
    if (value[i] != value[j]) return false;
  }
  return true;
}
