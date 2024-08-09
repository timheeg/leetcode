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
bool equal(ListNode* lhs, ListNode* rhs);
void print(ListNode* node);

class Solution {
 public:
  ListNode* reverseBetween(ListNode* head, int left, int right);
};
