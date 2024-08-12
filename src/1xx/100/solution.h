#pragma once

#include <queue>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), left(l), right(r) {}
};

constexpr int null{1000000};
TreeNode *create_dfs(const std::vector<int> &values, std::size_t &i);
TreeNode *create(const std::vector<int> &values);
bool equal(TreeNode *lhs, TreeNode *rhs);
void print(TreeNode *node);

class Solution {
 public:
  int isSameTree(TreeNode *p, TreeNode *q);
};
