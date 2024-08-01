#include "solution.h"

// Perform rotation one item at a time
//
void rotateManual(std::vector<int>& nums, int k) {
  // If empty or 1 item, nothing to do.
  if (nums.size() <= 1) {
    return;
  }

  // Don't loop/repeat rotations, only do the final rotation
  k = k % nums.size();

  for (auto i = 0; i < k; ++i) {
    nums.emplace(nums.begin(), nums.back());
    nums.pop_back();
  }
}

// Perform rotation as a single batch of work
//
void rotateBatch(std::vector<int>& nums, int k) {
  // If empty or 1 item, nothing to do.
  if (nums.size() <= 1) {
    return;
  }

  // Don't loop/repeat rotations, only do the final rotation
  k = k % nums.size();

  // Remove the batch from the end and drop it in front

  // Copy elements off the end to temp storage
  auto offset = nums.size() - k;
  auto pos = std::next(nums.begin(), offset);
  std::vector<int> batch{};
  batch.insert(batch.begin(), pos, nums.end());

  // Remove the elements off the end
  nums.erase(pos, nums.end());

  // Prepend the elements off the end to the beginning
  nums.insert(nums.begin(), batch.begin(), batch.end());
}

void Solution::rotate(std::vector<int>& nums, int k) {
#if MANUAL
  rotateManual(nums, k);
#else
  rotateBatch(nums, k);
#endif
}
