class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) :
        
        result = []
        def visit(node :TreeNode):
            if node != None :
               visit(node.left)
               result.append(node.val)
               visit(node.right)

        root = [1,2,3,4,None,5,6,7,8,None,9,10,None,None,11]

        visit(root) 
        return result       

 