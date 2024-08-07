#include <138/solution.h>

#include <iostream>
#include <unordered_map>

bool debug{true};

void print(Node* node) {
  while (node != nullptr) {
    std::cout << node << " [val=" << node->val << ", next=" << node->next
              << ", rand=" << node->random << "]\n";
    node = node->next;
  }
  std::cout << "\n";
}

Node* create(const std::vector<std::vector<int>>& values) {
  if (std::empty(values)) return nullptr;
  std::vector<Node*> offsets{};
  Node* result = new Node(values[0][0]);
  offsets.push_back(result);
  Node* result_root = result;
  for (auto i = 1u; i < std::size(values); ++i) {
    result->next = new Node(values[i][0]);
    offsets.push_back(result->next);
    result = result->next;
  }

  result = result_root;
  for (auto i{0u}; i < std::size(values); ++i) {
    auto value = values[i][1];
    result->random = (value == null) ? nullptr : offsets[value];
    result = result->next;
  }

  return result_root;
}

bool equal(Node* lhs, Node* rhs) {
  if (lhs == nullptr && rhs == nullptr) return true;
  if (lhs == nullptr || rhs == nullptr) return false;
  while (lhs != nullptr && rhs != nullptr) {
    if (lhs->val != rhs->val) return false;
    if (lhs->next == rhs->next) return false;
    if (lhs->random == rhs->random) return false;
  }
  return (lhs == nullptr && rhs == nullptr);
}

Node* Solution::copyRandomList(Node* head) {
  if (head == nullptr) return nullptr;

  std::unordered_map<Node*, Node*> mapping{};

  Node* copy = new Node(head->val);
  mapping[head] = copy;
  Node* copy_root = copy;

  Node* node = head->next;
  while (node != nullptr) {
    copy->next = new Node(node->val);
    mapping[node] = copy->next;
    copy = copy->next;
    node = node->next;
  }

  node = head;
  copy = copy_root;
  while (node != nullptr) {
    copy->random = mapping[node->random];
    node = node->next;
    copy = copy->next;
  }

  return copy_root;
}
