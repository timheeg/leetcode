#include <209/solution.h>

#include <algorithm>
#include <limits>
#include <ranges>
#include <vector>

//
// Intuition:
// Find the largest value and see if it is >= target.
// Otherwise, create a window with size 2 and check it.
// Then increase the window by 1 and check that window across the set.
// Then continue increasing the window.
// ⚠️ This solution is too slow, calculating all possible windows.
//
int use_slides(int target, std::vector<int>& nums) {
  if (target == 0 || nums.empty()) return 0;
  auto max = *std::max_element(nums.begin(), nums.end());
  if (max >= target) return 1;
  for (auto width : std::ranges::views::iota(2u, std::size(nums) + 1)) {
    auto windows = nums | std::views::slide(width);

    // for each window, accumulate the values in the window range
    // find the max result of all windows
    auto value = std::ranges::max(
        windows | std::ranges::views::transform([](auto window) {
          return std::ranges::fold_left(window, 0, std::plus{});
        }));
    if (value >= target) return width;
  }
  return 0;
}

int Solution::minSubArrayLen(int target, std::vector<int>& nums) {
#if 1
  return use_slides(target, nums);
#endif
}
