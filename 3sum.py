class Solution:
    def threeSum(self, nums: int) -> int:
        
        result = set()
        nums = sorted(nums)
        
        for i in range (0,len(nums)-1) :
            
            target = - nums[i]
            j = i+1
            k = len(nums)-1

            while j < k :
                if nums[j] + nums[k] == target :
                    result.add((nums[i],nums[j],nums[k]))
                    j += 1
                    k -= 1
                elif nums[j] + nums[k] > target :
                    k -= 1
                else :
                    j += 1
        
        return [list(triplet) for triplet in result]


                    
                    


        
      


        
        
    
    
        


        

  