# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.maxv = float('-inf')

        def recursive(node):
            if not node:
                return 0

            max_left = recursive(node.left)
            max_right = recursive(node.right)

            self.maxv = max((node.val + max_left + max_right), self.maxv)
            return max(node.val + max(max_left, max_right), 0)
        
        recursive(root)
        return self.maxv


        
