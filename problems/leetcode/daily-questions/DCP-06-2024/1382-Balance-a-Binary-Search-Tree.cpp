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
    void inorder(TreeNode* root,vector<int> &v){
        if(root!=NULL){
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }

    TreeNode* inorderToBST(int l,int r,vector<int> &v){
        if(l>r)
            return NULL;
        int mid = (l+r)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left = inorderToBST(l,mid-1,v);
        root->right = inorderToBST(mid+1,r,v);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        return inorderToBST(0,v.size()-1,v);
    }
};