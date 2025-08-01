# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        self.output= None

        def helper(node):
            if not node or self.output:
                return False

            valLeft = helper(node.left)
            valRight = helper(node.right)

            if valLeft  and valRight:
                self.output = node
                return True

            if (node == p or node == q) and (valLeft or valRight):
                self.output = node
                return True

            return node == p or node == q or valLeft or valRight
            
        helper(root)
        return self.output
            
            


            
        
