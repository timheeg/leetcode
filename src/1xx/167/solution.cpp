#include <167/solution.h>

#include <cassert>
#include <iostream>

//
// Intuition:
// The smallest number is numbers[1] + numbers[2].
// The largest number is numbers[n-1] + numbers[n].
// So numbers[1] + numbers[n] is the midpoint.
// If the target is less, decrease the large number to numbers[n-1].
// If the target is more, increase the small number to numbers[2].
//

std::vector<int> Solution::twoSum(std::vector<int>& numbers, int target) {
  auto i = 0ul, j = std::size(numbers) - 1;
  while (i < j) {
    if (numbers[i] + numbers[j] < target) {
      ++i;
      continue;
    }
    if (numbers[i] + numbers[j] > target) {
      --j;
      continue;
    }
    return {static_cast<int>(i) + 1, static_cast<int>(j) + 1};
  }
  return {};
}
