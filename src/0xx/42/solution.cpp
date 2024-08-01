#include <42/solution.h>

#include <algorithm>
#include <iostream>
#include <map>
#include <set>

//
// Intuition: Use a top-down approach. Starting with the highest value, look for
// a gap of how many numbers between each time that number appears. As you work
// your way down, look for a gap of that number or higher. Count all the "gap"
// spaces between numbers as you work down to 1. O can't hold wanter, so ignore.
//

namespace {
using height_t = int;
using index_t = std::vector<int>;

namespace debug {
bool enabled{false};

void print(std::vector<int> list) {
  std::for_each(std::cbegin(list), std::cend(list),
                [](const auto value) { std::cout << value << ", "; });
  std::cout << "\n";
}

void print(const std::map<height_t, index_t>& tree,
           const std::set<height_t>& unique_heights) {
  std::for_each(std::begin(unique_heights), std::end(unique_heights),
                [&tree](const auto value) {
                  std::cout << value << ": ";
                  debug::print(tree.at(value));
                });
}
}  // namespace debug

namespace top_down {
[[maybe_unused]] int trap(std::vector<int>& height) {
  std::map<height_t, index_t> tree{};
  std::set<height_t> unique_heights{};

  for (auto i = 0u; i < height.size(); ++i) {
    tree[height[i]].push_back(i);
    unique_heights.insert(height[i]);
  }
  if (debug::enabled) debug::print(tree, unique_heights);
  auto i{0};
  for (auto it = std::begin(unique_heights); it != std::end(unique_heights);
       ++it) {
    auto delta = *it - i;
    for (auto j = 0; j < delta; ++j) {
      unique_heights.insert(i + j);
      tree[i + j] = {};
    }
    i += delta;
    ++i;
  }
  if (debug::enabled) debug::print(tree, unique_heights);

  auto water{0};
  for (auto it = unique_heights.rbegin(); it != unique_heights.rend(); ++it) {
    if (std::next(it) == unique_heights.rend()) break;
    if (debug::enabled) std::cout << "Check level " << *it << "\n";
    if (tree[*it].size() <= 1) {
      // merge this layer with the next lower
      std::vector<int> result{};
      std::set_union(std::begin(tree[*it]), std::end(tree[*it]),
                     std::begin(tree[*it - 1]), std::end(tree[*it - 1]),
                     std::back_inserter(result));
      tree[*it - 1] = result;
      continue;
    }
    for (auto j = 0U; j < tree[*it].size() - 1; ++j) {
      water += tree[*it][j + 1] - tree[*it][j] - 1;
    }
    if (debug::enabled) std::cout << "water: " << water << "\n";
    std::vector<int> result{};
    std::set_union(std::begin(tree[*it]), std::end(tree[*it]),
                   std::begin(tree[*it - 1]), std::end(tree[*it - 1]),
                   std::back_inserter(result));
    tree[*it - 1] = result;
  }

  return water;
}
}  // namespace top_down

namespace breadth {
[[maybe_unused]] int trap(std::vector<int>& height) {
  std::vector<int> max_left(height.size());
  auto max{0};
  for (auto i = 0u; i < height.size(); ++i) {
    if (i == 0) {
      max_left[i] = 0;
      max = height[i];
      continue;
    }
    max_left[i] = max;
    max = std::max(height[i], max);
  }
  if (debug::enabled) std::cout << "max_left: ";
  if (debug::enabled) debug::print(max_left);

  max = 0;
  std::vector<int> max_right(height.size());
  for (auto i = height.size(); i > 0; --i) {
    if (i == height.size()) {
      max_right[i - 1] = 0;
      max = height[i - 1];
      continue;
    }
    max_right[i - 1] = max;
    max = std::max(height[i - 1], max);
  }
  if (debug::enabled) std::cout << "max_right: ";
  if (debug::enabled) debug::print(max_right);

  auto total_water{0};
  for (auto i = 0u; i < height.size(); ++i) {
    total_water += std::max(std::min(max_left[i], max_right[i]) - height[i], 0);
  }

  return total_water;
}
}  // namespace breadth
}  // namespace

int Solution::trap(std::vector<int>& height) {
#if 0
  auto trap = top_down::trap;
#else
  auto trap = breadth::trap;
#endif
  return trap(height);
}
