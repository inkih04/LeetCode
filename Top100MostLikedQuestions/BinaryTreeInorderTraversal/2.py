#Definition for a binary tree node.
class TreeNode(object):
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right


class Solution(object):
    def inorderTraversal(self, root):
        if not root:
            return []
        list = []
        self.recursiveInorderTraversal(root, list)
        return list

    def recursiveInorderTraversal(self, root, solution):
        if root.left:
            self.recursiveInorderTraversal(root.left, solution)
        solution.append(root.val)
        if root.right:
            self.recursiveInorderTraversal(root.right, solution)


def main():
    print("hola")

if __name__ == "__main__":
    main()
        