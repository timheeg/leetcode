#include "solution.h"

int Solution::removeDuplicates(std::vector<int>& nums) {
  // Simply want to identify each new element encountered in the list
  // If the same element is identified, then insert/keep it once, and mark a
  // boolean that we've already saved a second instance.
  // Use an insertion pointer to the start of the list to write the unique (or
  // duplicate) result elements. And use an interator pointer to walk the list.

  if (nums.size() <= 1) return nums.size();

  int k = 0;
  bool has2{false};
  for (auto i = 1U; i < nums.size(); i++) {
    if (nums[i] == nums[k] && !has2) {
      has2 = true;
      k++;
      nums[k] = nums[i];
    } else if (nums[i] != nums[k]) {
      has2 = false;
      k++;
      nums[k] = nums[i];
    }
  }
  return k + 1;
}
