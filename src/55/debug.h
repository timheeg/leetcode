#pragma once
#include <iostream>
#include <set>
#include <vector>

namespace debug {

template <typename T>
void print(std::string_view header, std::vector<T>& list) {
  std::cout << header << ": ";
  for (auto i = 0U; i < list.size(); ++i) {
    std::cout << "(" << i << ")" << list[i] << " ";
  }
  std::cout << std::endl;
}

void print(int index, const std::set<int>& edges) {
  std::cout << index << ": {";
  for (auto it = edges.cbegin(); it != edges.cend(); ++it) {
    if (it != edges.cbegin()) std::cout << ", ";
    std::cout << *it;
  }
  std::cout << "}" << std::endl;
}
}  // namespace debug
