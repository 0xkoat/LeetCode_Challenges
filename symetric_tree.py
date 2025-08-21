class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool :

        def visit (node : TreeNode , result : list) :
            if node != None :
                result.append(node.val)
                visit(node.left, result)
                visit(node.right, result)
            else : result.append(None)
        
        def reversed_visit (node : TreeNode , result : list) :
            if node != None :
                result.append(node.val)
                reversed_visit(node.right, result)
                reversed_visit(node.left, result)
            else : result.append(None)

        result_1 , result_2 = [] , []
        visit(root, result_1)
        reversed_visit(root, result_2)

        return result_1 == result_2
        
        