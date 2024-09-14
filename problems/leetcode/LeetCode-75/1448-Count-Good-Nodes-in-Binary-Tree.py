# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        def isGood(root,maxVal):
            if root is None:
                return 0
            ans = 0
            if root.val >= maxVal:
                ans = 1
                maxVal = root.val 
            return ans + isGood(root.left,maxVal) + isGood(root.right,maxVal)
        return isGood(root,root.val)
