#include <20/solution.h>

#include <string>
#include <vector>

//
// Intuition:
// Just push and pop to check validity.
//

bool Solution::isValid(std::string s) {
  if (std::size(s) < 2) return false;
  std::vector<char> stack;
  for (auto c : s) {
    if (c == '}' || c == ')' || c == ']') {
      if (stack.empty()) return false;
      auto b = stack.back();
      if (c == '}' && b != '{') return false;
      if (c == ')' && b != '(') return false;
      if (c == ']' && b != '[') return false;
      stack.pop_back();
      continue;
    }
    if (c == '{' || c == '(' || c == '[') {
      stack.push_back(c);
      continue;
    }
    return false;
  }
  return stack.empty();
}
