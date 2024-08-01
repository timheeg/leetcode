#include <238/solution.h>

#include <iostream>

namespace {
bool debug{false};
}

std::vector<int> Solution::productExceptSelf(std::vector<int>& nums) {
  std::vector<int> prefixes(nums.size());
  std::vector<int> suffixes(nums.size());

  prefixes[0] = 1;
  suffixes[nums.size() - 1] = 1;
  for (std::size_t i = 1u; i < nums.size(); ++i) {
    prefixes[i] = nums[i - 1] * prefixes[i - 1];

    suffixes[nums.size() - i - 1] =
        nums[nums.size() - i] * suffixes[nums.size() - i];
  }

  if (debug) std::cout << prefixes << std::endl;
  if (debug) std::cout << suffixes << std::endl;

  prefixes[0] = suffixes[0];
  for (auto i = 1u; i < nums.size() - 1; ++i) {
    prefixes[i] *= suffixes[i];
  }

  return prefixes;
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& nums) {
  os << "{";
  for (auto& num : nums) {
    os << num << ",";
  }
  os << "}\n";
  return os;
}
