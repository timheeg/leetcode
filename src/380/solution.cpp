#include <380/solution.h>

#include <iostream>
#include <random>

RandomizedSet::RandomizedSet() {}

bool RandomizedSet::insert(int val) {
  if (map.contains(val)) {
    return false;
  }

  vector.push_back(val);
  return map.insert({val, vector.size() - 1}).second;
}

bool RandomizedSet::remove(int val) {
  if (not map.contains(val)) {
    return false;
  }

  auto idx = map.at(val);
  vector[idx] = vector.back();
  vector.pop_back();
  map[vector[idx]] = idx;
  return map.erase(val) == 1;
}

int RandomizedSet::getRandom() { return vector[rand() % vector.size()]; }

void print(const std::vector<int>& vector) {
  for (auto& v : vector) {
    std::cout << v << ", ";
  }
  std::cout << std::endl;
}

void print(const std::unordered_map<int, int>& map) {
  for (auto it = map.begin(); it != map.end(); ++it) {
    std::cout << "{" << it->first << ", " << it->second << "}, ";
  }
  std::cout << std::endl;
}
