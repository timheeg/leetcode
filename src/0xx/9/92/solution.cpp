#include <92/solution.h>

#include <iostream>
#include <vector>

//
// Intuition:
//

void print(ListNode* node) {
  std::cout << "[";
  while (node != nullptr) {
    std::cout << " " << node->val;
    node = node->next;
  }
  std::cout << " ]\n";
}

ListNode* create(const std::vector<int>& values) {
  if (std::empty(values)) return nullptr;

  ListNode* node = new ListNode(values[0]);
  ListNode* root = node;
  for (auto i{1u}; i < std::size(values); ++i) {
    node->next = new ListNode(values[i]);
    node = node->next;
  }
  return root;
}

bool equal(ListNode* lhs, ListNode* rhs) {
  if (lhs == nullptr && rhs == nullptr) return true;
  if (lhs == nullptr || rhs == nullptr) return false;
  while (lhs != nullptr && rhs != nullptr) {
    if (lhs->val != rhs->val) return false;
    lhs = lhs->next;
    rhs = rhs->next;
  }
  return (lhs == nullptr && rhs == nullptr);
}

ListNode* Solution::reverseBetween(ListNode* head, int left, int right) {
  if (head == nullptr) return nullptr;
  if (left == right) return head;

  ListNode* node = head;
  ListNode* insert = nullptr;
  auto i{1};  // find i == left node
  while (node != nullptr && i < left) {
    insert = node;
    node = node->next;
    i++;
  }
  while (i < right) {
    // Move node->next to insert
    ListNode* after = node->next->next;
    if (insert == nullptr) {  // insert at front of list
      node->next->next = head;
      head = node->next;
      node->next = after;
    } else {
      node->next->next = insert->next;
      insert->next = node->next;
      node->next = after;
    }
    ++i;
  }

  return head;
}
