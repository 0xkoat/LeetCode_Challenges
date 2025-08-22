class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> int:
        final = []
        def visit(node :TreeNode , result ) :
            if node != None :
                visit(node.left , result)                
                visit(node.right , result)
                result.append(node.val)
            return result
        
        return visit(root , final)
