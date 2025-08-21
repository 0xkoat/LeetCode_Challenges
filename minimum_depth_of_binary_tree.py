class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def minDepth(self, root: TreeNode) -> int:
        
        def shortest(node : TreeNode) :

            if node == None :
                return 0
            elif node.right == None and node.left == None :
                return 1
            elif node.right == None :
                return 1+ shortest(node.left)
            elif node.left == None :
                return 1+ shortest(node.right)
            else : 
                return 1 + min(shortest(node.left), shortest(node.right))
        

        counter = shortest(root)
        return counter
