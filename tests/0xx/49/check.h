#pragma once

#include <algorithm>
#include <string>
#include <vector>

inline bool is_equal(const std::vector<std::string>& lhs,
                     const std::vector<std::string>& rhs) {
  if (std::size(lhs) != std::size(rhs)) return false;
  for (auto s : lhs) {
    if (std::find(rhs.begin(), rhs.end(), s) == std::end(rhs)) return false;
  }
  return true;
}

inline bool is_equal(const std::vector<std::vector<std::string>>& lhs,
                     const std::vector<std::vector<std::string>>& rhs) {
  for (auto l : lhs) {
    if (not std::any_of(rhs.begin(), rhs.end(),
                        [&l](auto r) { return is_equal(l, r); }))
      return false;
  }
  return true;
}
