#include "solution.h"

int Solution::removeDuplicates(std::vector<int>& nums) {
  // Simply want to identify each new element encountered in the list
  // Use an insertion pointer to the start of the list to write the unique
  // result elements. And use an interator pointer to walk the list.

  if (nums.size() <= 1) return nums.size();

  int k = 0;
  for (auto i = 1U; i < nums.size(); i++) {
    if (nums[i] != nums[k]) {
      k++;
      nums[k] = nums[i];
    }
  }
  return k + 1;
}
