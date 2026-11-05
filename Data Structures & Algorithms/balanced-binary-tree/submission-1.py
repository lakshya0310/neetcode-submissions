# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def height(self,root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        r = self.height(root.right)
        l = self.height(root.left)
        return 1+max(r,l)
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        r = self.height(root.right)
        l = self.height(root.left)
        if abs(l-r)> 1:
            return False
        return self.isBalanced(root.left) and self.isBalanced(root.right)