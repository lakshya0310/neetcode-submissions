# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    m = 0
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.m = 0
        def dfs(node):
            if node is None:
                return 0
            r = dfs(node.right)
            l = dfs(node.left)
            self.m = max(self.m, l + r)
            return 1 + max(l, r)
        dfs(root)
        return self.m