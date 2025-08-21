class Solution:
    def searchInsert(self, nums: int, target: int) -> int:
        i = len(nums) // 2
        f = 0
        j = len(nums) -1

        if target > nums[j] :
            return j+1        
        
        test = False  
        while (i !=0) and test == False :   
         
         test = nums[i-1] < target <= nums[i] 
         if (nums[i] == target) or test == True :
            return i
        
         elif target < nums[i] :
            j = i                                 
            i = (j - f) // 2

         elif target > nums[i] :                       
            f = i 
            i =  (j + f) // 2 
            if i == f :
                return i+1
           
         test = nums[i-1] < target <= nums[i]
         
        return i

        
        


        

            
            

                
        
        

        


