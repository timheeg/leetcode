#include "solution.h"

int Solution::removeElement(std::vector<int>& nums, int val) {
  // walk my way backward through the list of nums
  // if I find an element to eject, them pop the last item off the list
  // and insert it there in its place, then continue
  // if it is the end of the list, then just pop the item and continue

  int k = nums.size();
  for (auto i = k - 1; i >= 0; i--) {
    if (nums[i] == val) {
      nums[i] = nums.back();
      nums.pop_back();
      k--;
    }
  }
  return k;
}
