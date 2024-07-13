/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int globalSum;
    private void rec(TreeNode root, int sum){
        sum=sum*10+root.val;
        if(root.left==null&&root.right==null){
             globalSum+=sum;
            return;
        }
        if(root.left!=null)
            rec(root.left,sum);
        if(root.right!=null)
            rec(root.right,sum);
    }
    public int sumNumbers(TreeNode root) {
        globalSum=0;
        rec(root,0);
        return globalSum;
    }
}