#include <228/solution.h>

#include <string>
#include <vector>

//
// Intuition:
// Simply iterator over nums and keep track of the start/end ranges as you go.
//

std::vector<std::string> Solution::summaryRanges(std::vector<int>& nums) {
  if (std::empty(nums)) return {};
  if (std::size(nums) == 1) return {std::to_string(nums[0])};

  std::vector<std::string> result{};
  auto a{0}, b{1};
  while (b < static_cast<int>(std::size(nums))) {
    if (nums[a] + (b - a) == nums[b]) {
      ++b;
      continue;
    }
    // add result
    if (a == b - 1) {
      result.push_back(std::to_string(nums[a]));
    } else {
      result.push_back(std::to_string(nums[a]) + "->" +
                       std::to_string(nums[b - 1]));
    }
    a = b;
    ++b;
  }
  // add last result
  if (a == b - 1) {
    result.push_back(std::to_string(nums[a]));
  } else {
    result.push_back(std::to_string(nums[a]) + "->" +
                     std::to_string(nums[b - 1]));
  }
  return result;
}
