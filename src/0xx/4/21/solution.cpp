#include <21/solution.h>

#include <algorithm>
#include <iostream>
#include <vector>

bool debug{false};

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

bool equal(const ListNode* lhs, const ListNode* rhs) {
  if (lhs == nullptr && rhs == nullptr) return true;
  if (lhs == nullptr || rhs == nullptr) return false;
  auto l = lhs;
  auto r = rhs;
  while (l != nullptr && r != nullptr) {
    if (l->val != r->val) return false;
    l = l->next;
    r = r->next;
  }
  return (l == nullptr && r == nullptr);
}

namespace create_new_list {

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  if (l1 == nullptr && l2 == nullptr) return nullptr;
  if (l1 == nullptr) return l2;
  if (l2 == nullptr) return l1;

  if (debug) print_list(l1);
  if (debug) print_list(l2);

  ListNode* result_root = nullptr;
  ListNode* result = nullptr;

  while (l1 != nullptr || l2 != nullptr) {
    if (l1 == nullptr) {  // continue inserting l2
      if (result == nullptr) {
        result = new ListNode(l2->val);
        result_root = result;
      } else {
        result->next = new ListNode(l2->val);
        result = result->next;
      }
      l2 = l2->next;
      continue;
    }
    if (l2 == nullptr) {  // continue inserting l1
      if (result == nullptr) {
        result = new ListNode(l1->val);
        result_root = result;
      } else {
        result->next = new ListNode(l1->val);
        result = result->next;
      }
      l1 = l1->next;
      continue;
    }
    if (l1->val < l2->val) {  // insert l1
      if (result == nullptr) {
        result = new ListNode(l1->val);
        result_root = result;
      } else {
        result->next = new ListNode(l1->val);
        result = result->next;
      }
      l1 = l1->next;
      continue;
    }
    // insert l2
    if (result == nullptr) {
      result = new ListNode(l2->val);
      result_root = result;
    } else {
      result->next = new ListNode(l2->val);
      result = result->next;
    }
    l2 = l2->next;
  }
  return result_root;
}
}  // namespace create_new_list

namespace recurse {
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  if (l1 == nullptr && l2 == nullptr) return nullptr;
  if (l1 == nullptr) return l2;
  if (l2 == nullptr) return l1;
  if (l1->val < l2->val)
    return new ListNode(l1->val, mergeTwoLists(l1->next, l2));
  return new ListNode(l2->val, mergeTwoLists(l1, l2->next));
}
}  // namespace recurse

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
#if 0
  return create_new_list::mergeTwoLists(l1, l2);
#else
  return recurse::mergeTwoLists(l1, l2);
#endif
}
