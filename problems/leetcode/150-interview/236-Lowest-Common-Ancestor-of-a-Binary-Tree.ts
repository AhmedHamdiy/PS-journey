/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */
class parentMap {
  key: TreeNode;
  val: TreeNode;
}
function lowestCommonAncestor(root: TreeNode | null, p: TreeNode | null, q: TreeNode | null): TreeNode | null {
    if(root===null)
        return null;
    const l=lowestCommonAncestor(root.left,p,q);
    const r=lowestCommonAncestor(root.right,p,q);
    if((l&&r) || (root.val==p.val) || (root.val==q.val))
        return root;
    return l || r;
};