# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        self.depth = 0
        self.output = None

        def helper(node):
            if not node or self.output is not None:
                return None
            
            helper(node.left)
            self.depth += 1

            if self.depth == k:
                self.output = node.val

            helper(node.right)

        

        helper(root)
        return self.output
        
