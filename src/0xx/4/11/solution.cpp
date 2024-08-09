#include <11/solution.h>

#include <algorithm>
#include <functional>
#include <map>
#include <vector>

//
// Intuition:
// You want the most water, so start with the tallest walls.
// Then find the next tallest wall, and check the volumes of next against
// each of the tallest walls. If one is greater, then make those your 2 main
// walls and them against the next shorter wall. Continuing until you've checked
// all walls.
//

struct line {
  int height;
  int idx;
};

template <>
struct std::greater<line> {
  bool operator()(const line& lhs, const line& rhs) {
    return lhs.height > rhs.height;
  }
};

int Solution::maxArea(std::vector<int>& height) {
  if (std::size(height) < 2) return 0;

  if (std::size(height) == 2) {
    return std::min(height[0], height[1]);
  }

  // Create an ordered list of lines (heights with original indexes).
  std::vector<line> sorted;
  std::for_each(height.begin(), height.end(), [&sorted, i = 0](auto v) mutable {
    sorted.emplace_back(line(v, i++));
  });
  std::sort(sorted.begin(), sorted.end(), std::greater<line>{});

  auto i = 0, j = 1;
  auto max = std::min(sorted[i].height, sorted[j].height) *
             std::abs(sorted[i].idx - sorted[j].idx);
  for (auto k = 2ul; k < std::size(sorted); ++k) {
    auto ki = std::min(sorted[i].height, sorted[k].height) *
              std::abs(sorted[i].idx - sorted[k].idx);
    auto kj = std::min(sorted[k].height, sorted[j].height) *
              std::abs(sorted[k].idx - sorted[j].idx);
    if (ki > max || kj > max) {
      if (ki > kj) {
        i = i;
        j = k;
      } else if (ki < kj) {
        i = j;
        j = k;
      }
      max = std::max(std::max(ki, kj), max);
    }
  }
  return max;
}
