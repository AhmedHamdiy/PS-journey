# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        if not inorder or not postorder:
            return None

        idx_map = {val: idx for idx, val in enumerate(inorder)}

        def build(start, end):
            if start > end:
                return None
            root_val = postorder.pop()
            root = TreeNode(root_val)

            idx = idx_map[root_val]
            
            root.right = build(idx + 1, end)
            root.left = build(start, idx - 1)

            return root

        return build(0, len(inorder) - 1)