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
    vector<string> binaryTreePaths(TreeNode* root) {
        string solution;
        vector<string> solutionC;
        solution = to_string(root->val);


        if (root->left != nullptr) {
            //LEFT SON
            back_track(root->left, solution, solutionC);
        }
        //RIGHT SON
        if (root->right != nullptr) {
            solution = to_string(root->val);
            back_track(root->right, solution, solutionC);
        }
        if (root->right == nullptr && root->left == nullptr) solutionC.push_back(solution);
        return solutionC;
    }

    void back_track(TreeNode* node, string& solutionP, vector<string>& solutionC) {
        if (node->left == nullptr and node->right == nullptr){
            //Cuando soy un nodo sin hijos añado mi valor y acabo 
                solutionP += "->";
                solutionP += to_string(node->val);
                solutionC.push_back(solutionP);
        }
        else {
            if (node->left != nullptr) {
                string temp = solutionP;

                solutionP += "->";
                solutionP += to_string(node->val);
                back_track(node->left, solutionP, solutionC);

                solutionP = temp;
            }
            if(node->right != nullptr) {
                string temp = solutionP;
                solutionP += "->";
                solutionP += to_string(node->val);

                back_track(node->right, solutionP, solutionC);

                solutionP = temp;
            }
        }
    }


};
