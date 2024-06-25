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
private:
    int sum = 0;
public:
    TreeNode* bstToGst(TreeNode* root) {
        if (root) {
            root->right=bstToGst(root->right);  
            sum += root->val;  
            root->val = sum;  
            root->left=bstToGst(root->left);  
        }
        return root;
    }
};