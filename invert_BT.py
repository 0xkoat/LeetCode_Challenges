class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        
        def treeinverter (node : TreeNode) :
            if node == None :
                return None
            
            temp = node.left
            node.left = node.right
            node.right = temp

            treeinverter(node.left)
            treeinverter(node.right)
            return node
        
        return treeinverter(root)
            
        


 




  