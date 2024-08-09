#include <70/solution.h>

#include <vector>

//
// Intuition:
// Use a graph to represent each possible move/step.
// Each subtree contains the possible permutations, and is repeated throughout
// the tree. If you start from the bottom up, you can avoid recalculating every
// path by reusing knowledge from an already processed subtree.
//
// After implementing I realized this is just a fibonacci sequence.
//

int Solution::climbStairs(int n) {
  if (n == 1) return 1;
  if (n == 2) return 2;

  std::vector<int> a(n + 1, 0);

  for (auto i = n; i >= 0; --i) {
    if (i == n || i == n - 1) {
      a[i] = 1;
      continue;
    }
    a[i] = a[i + 1] + a[i + 2];
  }

  return a[0];
}
