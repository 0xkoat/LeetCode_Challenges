class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode, targetSum: int) -> bool:

        def calculator (node : TreeNode , targetSum ) :
            if node == None :
                return False
            
            elif node.left == None and node.right == None :
                return targetSum == node.val
            
            else :
                return  (calculator(node.right , targetSum-node.val) or calculator(node.left, targetSum-node.val))  

        return calculator(root, targetSum)