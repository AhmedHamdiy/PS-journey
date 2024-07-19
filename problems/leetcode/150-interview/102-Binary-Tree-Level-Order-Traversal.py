# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        i = 0
        ans = []
        q = deque([root])
        while q:
            l = len(q)
            v = []
            for _ in range(l):
                x = q.popleft()
                v.append(x.val)
                if x.left:
                    q.append(x.left)
                if x.right:
                    q.append(x.right)
            if (i^1):
                ans.append(v.reverse())
            else:
                ans.append(v)
            i=+1
            
        ans[0]=[root.val]
        return ans