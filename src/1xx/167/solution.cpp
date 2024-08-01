#include <167/solution.h>

#include <cassert>
#include <iostream>

std::vector<int> Solution::twoSum(std::vector<int>& numbers, int target) {
  assert(numbers.size() > 1);
  std::cout << "target: " << target << "\n";
  auto walk_back{false};
  auto i = 0, j = 1;
  while (j < static_cast<int>(numbers.size())) {
    std::cout << "n[" << i << "]: " << numbers[i] << ", ";
    std::cout << "n[" << j << "]: " << numbers[j] << "\n";
    if (numbers[i] + numbers[j] == target) return {i + 1, j + 1};
    if (numbers[i] + numbers[j] < target) {
      std::cout << "less than target\n";
      if (not walk_back) {
        std::cout << "not walk back ";
        if (j == static_cast<int>(numbers.size()) - 1) {
          walk_back = true;
          std::cout << "walk back ";
          for (++i; numbers[i] == numbers[i - 1]; ++i)
            ;
          std::cout << "i: " << i << "\n";
        } else {
          for (++j; j < static_cast<int>(numbers.size()) - 1 &&
                    numbers[j] == numbers[j - 1];
               ++j)
            ;
          std::cout << "j: " << j << "\n";
        }
      } else {
        std::cout << "walk back ";
        while (numbers[i] == numbers[i - 1]) ++i;
        std::cout << "i: " << i << "\n";
      }
    } else {  // total > target
      std::cout << "greater than target\n";
      if (walk_back) {
        std::cout << "walk back ";
        while (numbers[j] == numbers[j + 1]) --j;
        std::cout << "j: " << j << "\n";
      } else {
        std::cout << "not walk back, set walk back ";
        walk_back = true;
        while (numbers[j] == numbers[j + 1]) --j;
        while (numbers[i] == numbers[i - 1]) ++i;
        std::cout << "i: " << i << ", ";
        std::cout << "j: " << j << "\n";
      }
    }
  }
  return {i + 1, j + 1};
}
