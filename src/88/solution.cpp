#include "solution.h"

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2,
                     int n) {
  if (m == 0) {
    nums1 = nums2;
    return;
  }
  if (n == 0) {
    return;
  }

  // Walk array contents backward, reordering back-to-front
  // i is the reverse index of nums1 elements
  // j is the reverse index of nums2 elements
  // k is the reverse insertion index into nums1
  for (auto i = m - 1, j = n - 1, k = m + n - 1; i >= 0 || j >= 0;) {
    if (i < 0) {
      nums1[k] = nums2[j];
      j--;
      k--;
    } else if (j < 0) {
      break;
    } else if (nums1[i] < nums2[j]) {
      nums1[k] = nums2[j];
      k--;
      j--;
    } else {
      nums1[k] = nums1[i];
      nums1[i] = 0;
      i--;
      k--;
    }
  }
}
