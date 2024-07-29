# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution(object):
    def isSymetricRecursive(self, son1, son2):
        if not son1 and not son2:
            return True
        if not son2 or not son1:
            return False
        if son1.val == son2.val:
            return self.isSymetricRecursive(son1.left, son2.right) and self.isSymetricRecursive(son1.right, son2.left)
        return False

    def isSymmetric(self, root):
        return self.isSymetricRecursive(root.left, root.right)
        