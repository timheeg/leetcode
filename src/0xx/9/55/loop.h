#pragma once

#include <vector>

namespace time_limit_exceeded {
//
// Brute-force loop through all paths. When a dead end is found, unwind the
// indexes and continue to brute-force loop through it.
//
// Leetcode stated many wrong answers with this approach.
// Had I fixed this algorithm, it would have for exceeded the time limit.
//
namespace loop {
class Solution {
 public:
  bool debug = false;

  bool canJump(std::vector<int>& nums) {
    if (nums.size() <= 1) return true;

    const auto end{nums.size() - 1};

    std::vector<unsigned int> indexes{};  // the 'path' of index offsets

    auto i = 0U;
    while (i < end) {
      indexes.push_back(i);

      if (nums[i] == 0) {
        auto lastHop = indexes.back();
        indexes.pop_back();  // remove last path hop
        // If there are no other possible hops,
        // try previous hops in the path.
        // If nothing else in the path, we're stuck.
        if (indexes.empty()) return false;
        // Find the next previous hop in the path
        while (lastHop - 1 == indexes.back()) {
          lastHop = indexes.back();
          indexes.pop_back();  // remove last path hop
          if (indexes.size() == 0) return false;
        }
        // Try the next previous hop
        i = lastHop - 1;
        continue;
      }

      i += nums[i];
    }

    return i >= end;
  }
};
}  // namespace loop
}  // namespace time_limit_exceeded
