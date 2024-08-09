#pragma once

#include <vector>

//
// Instead of moving forward from the start and encountering all possible
// permutations of paths in front of you, start from the end and work your way
// back. Check each step to see if you can still adequately make any move to get
// you to a good node. If you hit a dead end node, search for a node that can
// get you past the dead-end.
//
namespace math_ish {
class Solution {
 public:
  bool debug = false;

  bool canJump(std::vector<int>& nums) {
    if (nums.size() <= 1) return true;

    auto step{0};
    for (auto i = nums.size() - 1; i > 0u; --i) {
      if (nums[i - 1] > step) {
        step = 0;
        continue;
      }
      step++;
    }
    return step == 0;
  }
};
}  // namespace math_ish
