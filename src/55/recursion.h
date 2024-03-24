#pragma once

#include <55/debug.h>

#include <iostream>
#include <map>
#include <set>
#include <vector>

namespace time_limit_exceeded {

//
// Recursively walk the graph of paths, storing edges to nodes in a table (map).
// Populate the table with all possible jump indexes, from +1 to the max jump
// allowed, for each node. Parse the set of all possible jumps starting from the
// right-most index or the longest jump first. The if that fails, try the
// previous node working back.
//
// Leetcode stated the time limit was exceeded and only 75 / 172 test cases
// passed with this solution.
//
namespace recursion {

class Solution {
 public:
  bool debug = false;

  bool canJump(std::vector<int>& nums) {
    if (nums.size() <= 1) return true;

    const auto end{nums.size() - 1};

    // Stores the list of paths from each node
    // The key is the index offset of the node
    // the set stored for a given node paths.at(i)
    // contains all the possible unique edges to node indexes
    // The set is ordered by positional index, dups are excluded.
    std::map<unsigned int, std::set<int>> paths{};

    auto i = 0u;
    if (nums[i] == 0) return false;

    auto found = canJump(nums, paths, i, end);
    return found;
  }

  [[nodiscard]] bool canJump(const std::vector<int>& nums,
                             std::map<unsigned int, std::set<int>>& paths,
                             const uint index, const uint end) {
    if (debug) std::cout << "canJump|index:" << index << std::endl;

    if (nums[index] == 0) return false;

    if (index + nums[index] >= end) return true;

    if (debug) std::cout << "canJump|Load edge paths" << std::endl;

    auto set = paths[index];
    if (debug) std::cout << "canJump|Get edge set" << std::endl;
    for (auto j = 1u; j <= static_cast<uint>(nums[index]); ++j) {
      if (index + nums[index + j] >= end) return true;
      set.insert(index + j);
    }

    if (debug) debug::print(index, set);

    while (!set.empty()) {
      auto it = set.rbegin();
      if (canJump(nums, paths, *it, end)) return true;
      set.erase(*it);
    }

    return false;
  }
};
}  // namespace recursion
}  // namespace time_limit_exceeded
