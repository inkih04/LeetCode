class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        inorder_index = {val: idx for idx, val in enumerate(inorder)}
        
        self.pre_idx = 0

        def helper(left: int, right: int) -> Optional[TreeNode]:
            if left > right:
                return None

            root_val = preorder[self.pre_idx]
            root = TreeNode(root_val)

            self.pre_idx += 1

            mid = inorder_index[root_val]

            root.left = helper(left, mid - 1)
            root.right = helper(mid + 1, right)

            return root

        return helper(0, len(inorder) - 1)
