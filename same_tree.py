class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        
        def visit (node : TreeNode , result : list) :
            if node != None :
                result.append(node.val)
                visit(node.left , result)
                visit(node.right, result)
            else : result.append(None)
        
        first , second = [] , []

        visit(p, first)
        visit(q, second)

        return first==second

        
    



        

    
        