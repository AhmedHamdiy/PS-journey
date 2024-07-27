# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        def inorder(root):
            res = []
            if root:
                res = inorder(root.left)
                res.append(root.val)
                res = res + inorder(root.right)
            return res

        def findMinDiff(arr, n):
        
            diff = 10**20

            for i in range(n-1):
                if arr[i+1] - arr[i] < diff:
                    diff = arr[i+1] - arr[i]

            return diff

        res = sorted(inorder(root))
        n = len(res)
        ans = findMinDiff(res,n)
        return ans