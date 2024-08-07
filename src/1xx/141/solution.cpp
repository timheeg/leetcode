#include <141/solution.h>

#include <algorithm>
#include <iostream>
#include <vector>

void print_node(ListNode* node) {
  if (node == nullptr) {
    std::cout << "{null}";
    return;
  }
  std::cout << "{val=" << node->val << ",next=";
  if (node->next == nullptr)
    std::cout << "null";
  else
    std::cout << "->";
  std::cout << "}\n";
}

void print_list(ListNode* node) {
  std::cout << "[";
  while (node != nullptr) {
    std::cout << node->val;
    if (node->next == nullptr)
      std::cout << " null";
    else
      std::cout << " -> ";
    node = node->next;
  }
  std::cout << "]\n";
}

ListNode* create(const std::vector<int>& values) {
  if (std::empty(values)) return nullptr;
  ListNode* root = nullptr;
  ListNode* prev = nullptr;
  for (auto value : values) {
    auto node = new ListNode(value);
    if (root == nullptr) root = node;
    if (prev != nullptr) prev->next = node;
    prev = node;
  }
  return root;
}

void connect(ListNode* head, int pos) {
  ListNode* tail = head;
  while (tail->next != nullptr) {
    tail = tail->next;
  }
  for (auto i{0}; i < pos; ++i) {
    head = head->next;
  }
  tail->next = head;
}

bool Solution::hasCycle(ListNode* head) {
  if (head == nullptr) return false;
  std::vector<ListNode*> visited{};
  while (head != nullptr) {
    // check if head in visited
    if (std::find(visited.begin(), visited.end(), head) != std::end(visited))
      return true;
    visited.push_back(head);
    head = head->next;
  }
  return false;
}
