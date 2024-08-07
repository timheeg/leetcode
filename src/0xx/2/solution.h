#pragma once

#include <vector>

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* n) : val(x), next(n) {}
};

ListNode* create(const std::vector<int>& values);
void connect(ListNode* head, int pos);
void print_node(ListNode* node);
void print_list(ListNode* node);
bool equal(const ListNode* lhs, const ListNode* rhs);

class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
