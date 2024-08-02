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

//
// After reading more about sliding window algorithm and understanding the
// impact of the minimal requirement, it makes sense to vary the window
// dynamically to search the window space instead of calculating all windows.
// e.g., https://builtin.com/data-science/sliding-window-algorithm
//
int use_SWA(int target, std::vector<int>& nums) {
  if (target == 0 || nums.empty()) return 0;
  if (std::size(nums) == 1) return nums[0] >= target ? 1 : 0;

  auto windowSum{0};
  auto minWindowSize{std::numeric_limits<ulong>::max()};
  auto start{0ul};

  for (auto end : std::ranges::views::iota(0ul, std::size(nums))) {
    windowSum += nums[end];

    while (windowSum >= target) {
      minWindowSize = std::min(minWindowSize, end - start + 1ul);
      if (minWindowSize == 1) return minWindowSize;  // short-circuit
      windowSum -= nums[start];
      start++;
    }
  }
  if (minWindowSize == std::numeric_limits<ulong>::max()) return 0;
  return minWindowSize;
}

int Solution::minSubArrayLen(int target, std::vector<int>& nums) {
#if 0
  return use_slides(target, nums);
#else
  return use_SWA(target, nums);
#endif
}
