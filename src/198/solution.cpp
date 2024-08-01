#include <198/solution.h>

#include <algorithm>
#include <vector>

//
// Intuition:
// Create a graph of all possible jumps (paths)
// Calculate the total money for each node working backward from the last node
// Each node you calculate coming backward, is the sum of the later nodes
// already calculated. Since your larges step is 2, then you only need to check
// out 2 steps as you calculate moving backward.
//

int Solution::rob(std::vector<int>& nums) {
  if (std::size(nums) == 1) return nums[0];

  const auto n = std::size(nums);
  std::vector<int> a(n, 0);

  for (auto i = n; i > 0; --i) {
    if (i == n || i == n - 1) {
      a[i - 1] = nums[i - 1];
      continue;
    }
    if (i == n - 2) {
      a[i - 1] = nums[i - 1] + nums[i + 1];
      continue;
    }
    auto s1 = nums[i - 1] + a[i + 1];
    auto s2 = nums[i - 1] + a[i + 2];
    a[i - 1] = std::max(s1, s2);
  }

  return *std::max_element(a.begin(), a.end());
}
