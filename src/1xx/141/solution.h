#pragma once

#include <vector>

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* create(const std::vector<int>& values);
void connect(ListNode* head, int pos);
void print_node(ListNode* node);
void print_list(ListNode* node);

class Solution {
 public:
  bool hasCycle(ListNode* head);
};
