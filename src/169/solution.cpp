#include "solution.h"

#include <algorithm>
#include <cmath>
#include <unordered_map>

int Solution::majorityElement(std::vector<int>& nums) {
  const int majority{static_cast<int>(nums.size() / 2U)};

  std::unordered_map<int, int> counts{};

  for (auto i = 0U; i < nums.size(); i++) {
    counts[nums[i]]++;
    if (counts[nums[i]] > majority) {
      return nums[i];
    }
  }
  return -1;
}
