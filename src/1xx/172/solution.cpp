#include <172/solution.h>

#include <ranges>

int Solution::trailingZeroes(int n) {
  auto fact{1ll};
  while (n > 1) {
    fact *= n;
    --n;
  }
  auto count{0};
  while (fact > 0) {
    if (fact % 10 != 0) {
      break;
    }
    count++;
    fact /= 10;
  }
  return count;
}
