#include <iostream>
#include <vector>

using namespace std;
 
//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode*  left;
    TreeNode*  right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode*  right) : val(x), left(left), right(right) {}
};
  
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        int d = depth(root, diameter);
        return diameter;
    }
    int depth(TreeNode* root, int& diameter) {
        if (!root) return 0;
        int ls = depth(root->left, diameter);
        int rs = depth(root->right, diameter);
        diameter = max(ls + rs, diameter);
        return max(ls, rs) + 1;
    }
};