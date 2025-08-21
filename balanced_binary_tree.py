class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        depths = {}  
        result = True  

        def checker(node):
            nonlocal result  
            if node == None :
                return 0  


            left_depth = checker(node.left)
            right_depth = checker(node.right)
            
            
            if abs(left_depth - right_depth) > 1:
                result = False
            
            
            depths[node] = 1 + max(left_depth, right_depth)
            return depths[node]

        checker(root)  
        return result


    
        
    

       
