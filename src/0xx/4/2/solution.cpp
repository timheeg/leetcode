#include <2/solution.h>

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

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
  if (l1 == nullptr && l2 == nullptr) return nullptr;
  if (l1 == nullptr) return l2;
  if (l2 == nullptr) return l1;

  if (debug) print_list(l1);
  if (debug) print_list(l2);

  ListNode* result_root = nullptr;
  ListNode* result = nullptr;
  auto carry = 0;

  while (l1 != nullptr || l2 != nullptr) {
    auto l1_val = (l1 == nullptr) ? 0 : l1->val;
    auto l2_val = (l2 == nullptr) ? 0 : l2->val;
    if (debug)
      std::cout << "l1_val=" << l1_val << ", l2_val=" << l2_val << "\n";

    auto sum = l1_val + l2_val + carry;
    auto digit = sum % 10;
    if (debug) std::cout << "sum=" << sum << ", digit=" << digit << "\n";
    if (debug) std::cout << "result=" << result;
    if (result == nullptr) {
      result = new ListNode(digit);
      result_root = result;
    } else {
      result->next = new ListNode(digit);
      result = result->next;
    }
    if (debug) std::cout << ", result=" << result << "\n";
    carry = (sum > 9) ? 1 : 0;
    if (debug) std::cout << "carry=" << carry << "\n";
    if (l1 != nullptr) l1 = l1->next;
    if (l2 != nullptr) l2 = l2->next;
  }
  if (carry > 0) result->next = new ListNode(carry);
  return result_root;
}
