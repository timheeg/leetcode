#include <55/dead_recursion_dead.h>
#include <55/loop.h>
#include <55/math_ish.h>
#include <55/recursion.h>
#include <55/recursion_dead.h>
#include <55/solution.h>

bool Solution::canJump(std::vector<int>& nums) {
  // time_limit_exceeded::loop::Solution s;
  // time_limit_exceeded::recursion::Solution s;
  // time_limit_exceeded::recursion_dead::Solution s;
  // time_limit_exceeded::dead_recursion_dead::Solution s;
  math_ish::Solution s;
  s.debug = debug;
  return s.canJump(nums);
}
