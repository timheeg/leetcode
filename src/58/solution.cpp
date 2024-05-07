#include <58/solution.h>

int Solution::lengthOfLastWord(std::string s) {
  auto length{0};
  auto trailing_space{true};
  for (auto i = s.size(); i > 0; --i) {
    if (s.at(i - 1) == ' ') {
      if (trailing_space) continue;
      break;
    }
    if (trailing_space) trailing_space = false;
    length++;
  }
  return length;
}
