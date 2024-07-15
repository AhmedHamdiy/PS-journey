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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        int root = -1, n=descriptions.size();
        unordered_map<int, int> parent;
        unordered_map<int, TreeNode*> node;
        parent.reserve(n);
        node.reserve(n);
        for (auto& d : descriptions) {
            int x = d[0], y = d[1], l = d[2];
            if (node.count(x)==0) {
                node[x] = new TreeNode(x);
                if (parent.count(x)==0)
                    root = x;
            }
            if (node.count(y)==0) {
                node[y] = new TreeNode(y);
            }
            parent[y] = x;
            if (l)
                node[x]->left = node[y];
            else
                node[x]->right = node[y];
        }
        while (parent.count(root))
            root = parent[root];
        return node[root];
    }
};