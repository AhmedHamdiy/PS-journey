# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        x, maxSum = 0, -inf
        q = deque([root])
        h = 0
        while q:
            l = len(q)
            sm = 0
            h += 1
            for i in range(l):
                node = q.popleft()
                sm += node.val
                if i == l-1:
                    if maxSum < sm :
                        maxSum = sm
                        x = h
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
        
        return x
            

