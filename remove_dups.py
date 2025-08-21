class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ch = {}
        k = 0
        for i in range (0,len(nums)) :
            if nums[i] not in ch :
                ch.update ({nums[i] : 0 })
                nums[k] = nums[i]
                k += 1             
      
        return k

  
        


    


           



