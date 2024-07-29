#include <iostream>
#include <vector>

using namespace std;


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
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> solution;
        inorderTraversal(root, solution);
        return solution;
    }

    void inorderTraversal(TreeNode* root, vector<int>& solution) {
        if (root->left != nullptr){
            inorderTraversal(root->left, solution);
        }
        solution.push_back(root->val);
        if (root->right != nullptr) {
            inorderTraversal(root->right, solution);
        }
    }
};

int main() {
    Solution s = Solution();  
}