class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    
    def sortedArrayToBST(self, nums: int) -> TreeNode:
        
        def bst_buider(arr) :
            
            if len(arr)  == 0 :
                return None
            
            mid = len(arr)//2
            
            result = TreeNode(arr[mid])
            result.left = bst_buider (arr[0:mid])
            result.right = bst_buider (arr[mid+1:len(arr)])
            
            return result
        
        return bst_buider(nums)

        

        


        

        


        


        