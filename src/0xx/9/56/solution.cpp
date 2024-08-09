#include <56/solution.h>

#include <algorithm>
#include <iostream>
#include <vector>

//
// Intuition:
//

bool debug{false};

struct Node {
  int a{0};
  int b{0};
  Node* next{nullptr};
  Node* prev{nullptr};
  Node(int x, int y) : a(x), b(y) {}
};

void print(Node* node) {
  if (node == nullptr) {
    std::cout << "null\n";
    return;
  }
  std::cout << "[" << node->a << "," << node->b << "] -> ";
  print(node->next);
}

//
// This uses an O(n^2) solution. Using an actual self-balancing tree (like an
// AVL) to store nodes would be more efficient, especially for all the wasted
// time spent doing `merge_left` and `merge_right` consolidation.
//
namespace n2 {

void merge_right(Node* node) {
  if (node == nullptr) return;
  if (node->next == nullptr) return;
  if (node->b >= node->next->a) {
    if (node->b < node->next->b) {
      node->b = node->next->b;
    }
    node->next = node->next->next;
    if (node->next != nullptr) node->next->prev = node;
    merge_right(node);
  }
}

void merge_left(Node* node) {
  if (node == nullptr) return;
  if (node->prev == nullptr) return;
  if (node->a <= node->prev->b) {
    if (node->a > node->prev->a) {
      node->a = node->prev->a;
    }
    node->prev = node->prev->prev;
    if (node->prev != nullptr) node->prev->next = node;
    merge_left(node);
  }
}

void insert(Node* node, const std::vector<int>& interval) {
  if (interval[1] < node->a) {
    if (debug) std::cout << "insert less\n";
    if (node->prev == nullptr) {
      if (debug) std::cout << "insert less inline\n";
      auto n = new Node(node->a, node->b);
      n->next = node->next;
      if (node->next != nullptr) node->next->prev = n;
      n->prev = node;
      node->next = n;
      node->a = interval[0];
      node->b = interval[1];
      return;
    }
    if (debug) std::cout << "insert less in between\n";
    auto n = new Node(interval[0], interval[1]);
    n->next = node;
    n->prev = node->prev;
    node->prev->next = n;
    node->prev = n;
    merge_left(n);
    return;
  }
  if (interval[0] > node->b) {
    if (debug) std::cout << "insert greater\n";
    if (node->next == nullptr) {
      if (debug) std::cout << "insert greater inline\n";
      auto n = new Node(interval[0], interval[1]);
      node->next = n;
      n->prev = node;
      return;
    }
    if (debug) std::cout << "insert after\n";
    insert(node->next, interval);
    return;
  }

  // overlap
  node->a = std::min(node->a, interval[0]);
  node->b = std::max(node->b, interval[1]);

  merge_left(node);
  merge_right(node);
}

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
  if (std::size(intervals) == 0) return {};
  if (std::size(intervals) == 1) return {intervals[0]};

  Node* root = new Node(intervals[0][0], intervals[0][1]);
  auto first{true};
  for (auto interval : intervals) {
    if (first) {
      first = false;
      continue;
    }
    insert(root, interval);
  }

  std::vector<std::vector<int>> result{};
  for (auto* node = root; node != nullptr; node = node->next) {
    result.push_back({node->a, node->b});
  }
  return result;
}
}  // namespace n2

std::vector<std::vector<int>> Solution::merge(
    std::vector<std::vector<int>>& intervals) {
#if 1
  return n2::merge(intervals);
#endif
}

void Solution::set_debug(bool value) { debug = value; }
