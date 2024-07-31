#include <137/solution.h>

#include <unordered_map>
#include <vector>

int Solution::singleNumber(std::vector<int>& nums) {
  std::unordered_map<int, int> m;
  for (auto i : nums) {
    m[i]++;
  }
  for (auto i : m) {
    if (i.second == 1) return i.first;
  }
  return -1;
}
