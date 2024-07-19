/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(vector<int> rightSide, vector<TreeNode*> trees) {
        if (trees.size() == 0) {
            return rightSide;
        }
        vector<TreeNode*> newTrees;
        TreeNode* root;
        int first_val = INT_MIN;
        for (int i = 0; i < trees.size(); i++) {
            root = trees.at(i);
            if (first_val == INT_MIN) {
                first_val = root->val;
                rightSide.push_back(first_val);
            }
            if (root->right != nullptr) {
                newTrees.push_back(root->right);
            }
            if (root->left != nullptr) {
                newTrees.push_back(root->left);
            } 
        }
        return rightSideView(rightSide, newTrees);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightSide;
        vector<TreeNode*> trees;
        if (root == nullptr) {
            return rightSide;
        }
        else {
            rightSide.push_back(root->val);
            if (root->right != nullptr) {
                trees.push_back(root->right);
            }
            if (root->left != nullptr) {
                trees.push_back(root->left);
            }
        }
        return rightSideView(rightSide, trees);
    }
};