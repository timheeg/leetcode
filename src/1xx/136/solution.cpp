#include <136/solution.h>

#include <algorithm>
#include <ranges>
#include <vector>

//
// Intuition:
// For each number, we can use XOR to determine whether the number has been
// seen once or twice.
//

int Solution::singleNumber(std::vector<int>& nums) {
  int answer{0};
  for (auto i : nums) {
    answer ^= i;
  }
  return answer;
}
