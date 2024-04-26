#pragma once

#include <ostream>
#include <vector>

class Solution {
 public:
  std::vector<int> productExceptSelf(std::vector<int>&);
};

std::ostream& operator<<(std::ostream&, const std::vector<int>&);
