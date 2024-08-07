#pragma once

#include <vector>

constexpr auto null{1000000};

class Node {
 public:
  int val;
  Node* next;
  Node* random;
  Node(int _val) : val(_val), next{nullptr}, random{nullptr} {}
};

Node* create(const std::vector<std::vector<int>>& values);
bool equal(Node* lhs, Node* rhs);
void print(Node* node);

class Solution {
 public:
  Node* copyRandomList(Node* head);
};
