#include <274/solution.h>

#include <algorithm>
#include <iostream>

// Intuition:
// sort all the citations, low to high
// walk back from the end,
// Check if the number of elements remaining (to the right) is >= the value
// of the element.
// If the value is greater, than they haven't published that many works with
// that value yet, so keep searching (left).
// Of course, you still get credit for the number of papers published, even
// if their citation values are high, so keep track of the number of papers.
// Give the author the most credit possible. If the number of papers counted
// is higher than the highest citation value across more papers, use the
// number of papers published instead.
//
int Solution::hIndex(std::vector<int>& citations) {
  std::sort(citations.begin(), citations.end());

  auto papers{0};
  for (auto i = citations.size(); i > 0; --i) {
    if (citations[i - 1] == 0) return papers;
    if (citations[i - 1] <= static_cast<int>(citations.size() - (i - 1))) {
      if (papers > citations[i - 1]) return papers;
      return citations[i - 1];
    }
    papers++;
  }

  return papers;
}
