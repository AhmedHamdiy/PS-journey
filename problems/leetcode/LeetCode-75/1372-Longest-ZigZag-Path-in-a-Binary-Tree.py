# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def longestZigZag(self, root: Optional[TreeNode]) -> int:
        self.max_zigzag = 0
        def dfs(root,isLeft,length):
            if not root:
                return
            self.max_zigzag = max(self.max_zigzag,length)
            if isLeft:
                dfs(root.right,False,length+1)
                dfs(root.left,True,1)
            else:
                dfs(root.left,True,length+1)
                dfs(root.right,False,1)
        dfs(root.left,True,1)
        dfs(root.right,False,1)
        return self.max_zigzag