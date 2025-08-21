class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        counter = 0
        def longest (node : TreeNode) :
            
            if node == None :
                return 0
            else : 
                return 1 + max(longest(node.left), longest(node.right))
            
        counter = longest(root)
        return counter
    
    
    

    
            
        

            
