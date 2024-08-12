#include <226/solution.h>

#include <iostream>

bool equal(TreeNode* lhs, TreeNode* rhs) {
  if (lhs == nullptr && rhs == nullptr) return true;
  if (lhs == nullptr || rhs == nullptr) return false;
  if (lhs->val != rhs->val) return false;
  return equal(lhs->left, rhs->left) && equal(lhs->right, rhs->right);
}

void print_n(TreeNode* node) {
  if (node == nullptr) {
    std::cout << "nullptr,";
    return;
  }
  std::cout << node->val << ",";
  print_n(node->left);
  print_n(node->right);
}

void print(TreeNode* node) {
  std::cout << "[";
  print_n(node);
  std::cout << "]\n";
}

TreeNode* create_dfs(const std::vector<int>& values, std::size_t& i) {
  if (i >= std::size(values)) return nullptr;
  if (values[i] == null) return nullptr;
  auto* node = new TreeNode(values[i]);
  node->left = create_dfs(values, ++i);
  node->right = create_dfs(values, ++i);
  return node;
}

TreeNode* create(const std::vector<int>& values) {
  std::size_t i{0u};
  return create_dfs(values, i);
}

TreeNode* Solution::invertTree(TreeNode* root) {
  if (root == nullptr) return nullptr;
  auto* l = invertTree(root->left);
  root->left = invertTree(root->right);
  root->right = l;
  return root;
}
