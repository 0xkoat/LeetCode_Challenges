class Solution:
    def majorityElement(self, nums: int) -> int: 

        counter = 0
        candidate = nums[0]
        
        for num in nums:   
            if num == candidate :
                counter += 1
            else :
                counter -= 1

            if counter == 0 :
                candidate = num
                counter += 1

        return candidate





        
 
                 
                



 

                
            

            
            

    
        
             
    
      



            

            
       






