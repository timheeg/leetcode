#pragma once

#include <55/debug.h>

#include <map>
#include <set>
#include <vector>

namespace time_limit_exceeded {
//
// Similar to the time_limit_exceeded::recursion_dead::Solution, but initially
// populates the set of dead nodes but performing a single pass through the list
// and finding any immediately obvious dead ends (1 step dead ends). The dead
// node set is used to avoid retracing jumps to nodes that were already
// processed as dead ends, just as in the recursion_dead solution.
//
// This actually takes longer to execute LeetCodeTest.Case5 than recursion_dead.
//
namespace dead_recursion_dead {
class Solution {
 public:
  bool debug = false;

  [[nodiscard]] bool canJump(std::vector<int>& nums) {
    if (nums.size() <= 1) return true;

    const auto end{nums.size() - 1};

    auto i = 0u;
    if (nums[i] == 0) return false;

    scanFirstOrderDeadEnds(nums);

    auto found = canJump(nums, i, end);
    return found;
  }

 private:
  // Need to keep track of dead nodes, i.e. nodes
  // that have been checked already but only result in failure.
  // Contains a set of unique node indexes.
  // If the node is not in the dead set, then it is still in play.
  std::set<unsigned int> dead_nodes{};

  // Stores the list of paths from each node
  // The key is the index offset of the node
  // the set stored for a given node paths.at(i)
  // contains all the possible unique edges to node indexes
  // The set is ordered by positional index, dups are excluded.
  std::map<unsigned int, std::set<int>> paths{};

  void scanFirstOrderDeadEnds(const std::vector<int>& nums) {
    for (auto i = 0U; i < nums.size(); ++i) {
      if (nums[i] == 0) {
        dead_nodes.insert(i);
      }
    }
  }

  [[nodiscard]] bool canJump(const std::vector<int>& nums, const uint index,
                             const uint end) {
    if (debug) std::cout << "canJump|index:" << index << std::endl;

    if (nums[index] == 0) {
      dead_nodes.insert(index);
      return false;
    }

    if (index + nums[index] >= end) return true;

    if (debug) std::cout << "canJump|Load edge paths" << std::endl;

    auto set = paths[index];
    if (debug) std::cout << "canJump|Get edge set" << std::endl;
    for (auto j = 1u; j <= static_cast<uint>(nums[index]); ++j) {
      if (index + nums[index + j] >= end) return true;
      if (dead_nodes.contains(index + j)) continue;
      set.insert(index + j);
    }

    if (debug) debug::print(index, set);

    while (!set.empty()) {
      auto it = set.rbegin();
      if (dead_nodes.contains(*it)) continue;
      if (canJump(nums, *it, end)) return true;
      dead_nodes.insert(*it);
      set.erase(*it);
    }

    return false;
  }
};
}  // namespace dead_recursion_dead
}  // namespace time_limit_exceeded
