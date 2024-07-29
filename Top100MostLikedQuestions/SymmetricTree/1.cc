#include <iostream>
#include <vector>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    bool isSymmetric(TreeNode* son1, TreeNode* son2) {
        if (!son1 && !son2) return true;
        if (!son1 or !son2) return false;
        if (son1->val == son2->val) {
            return isSymmetric(son1->left, son2->right) && isSymmetric(son1->right, son2->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root->left, root->right);
    }
};


int main () {

}