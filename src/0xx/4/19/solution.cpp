#include <19/solution.h>

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

ListNode* Solution::removeNthFromEnd(ListNode* head, int n) {
  if (head == nullptr) return nullptr;
  ListNode* node = head;
  ListNode* nth_node = head;
  ListNode* nth_prev = nullptr;
  for (auto i{1}; node != nullptr; node = node->next) {
    if (i < n) {
      ++i;
      continue;
    }
    if (node->next == nullptr) {  // end of list
      ListNode* after = nth_node->next;
      if (nth_prev == nullptr)
        head = after;
      else
        nth_prev->next = after;
      break;
    }
    nth_prev = nth_node;
    nth_node = nth_node->next;
  }
  return head;
}
