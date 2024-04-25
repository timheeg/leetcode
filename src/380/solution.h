#pragma once

#include <unordered_map>
#include <vector>

class RandomizedSet {
 public:
  RandomizedSet();
  bool insert(int val);
  bool remove(int val);
  int getRandom();

  std::unordered_map<int, int> map{};
  std::vector<int> vector{};
};

void print(const std::vector<int>&);
void print(const std::unordered_map<int, int>&);
