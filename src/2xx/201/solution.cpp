#include <201/solution.h>

#include <ranges>
#include <unordered_map>
#include <vector>

int Solution::rangeBitwiseAnd(int left, int right) {
  int result = 0xffffffff;
  if (left == right) return left;
  for (auto i : std::ranges::views::iota(left, right)) {
    result &= i;
    if (result == 0) return result;
  }
  return result &= right;
}
