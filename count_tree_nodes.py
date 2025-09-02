class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def countNodes(self, root: TreeNode) -> int:

        def left_height(node:TreeNode) :
            ht = 0
            while node :
                ht += 1
                node = node.left
            return ht
        
        def righ_height(node : TreeNode) :
            ht = 0
            while node :
                ht += 1
                node = node.right
            return ht
        
        def totalnodes (node : TreeNode) :
            if node == None :
                return 0
            
            lht = left_height(node)
            rht = righ_height(node)

            if lht == rht :
                return (1 << lht) -1
            
            return 1 + totalnodes(node.left) + totalnodes(node.right)
        
        return totalnodes(root)

        
        
        

        

        