# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class BSTIterator:

    def __init__(self, root: Optional[TreeNode]):
        self.idx = 0
        self.values = self.DFS(root)
    
    def DFS(self, root: Optional[TreeNode]):
        values = []

        def dfs(node):
            if node:
                dfs(node.left)
                values.append(node.val)
                dfs(node.right)

        dfs(root)

        return values


    def next(self) -> int:
        node = self.values[self.idx]
        self.idx += 1

        return node

    def hasNext(self) -> bool:
        return self.idx < len(self.values)
# Your BSTIterator object will be instantiated and called as such:
# obj = BSTIterator(root)
# param_1 = obj.next()
# param_2 = obj.hasNext()