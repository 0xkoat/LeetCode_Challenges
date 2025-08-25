class Solution:
    def containsDuplicate(self, nums: int) -> bool:
        seen_nums={}
        for num in nums :
            if num in seen_nums :
                return True
            else :
                seen_nums.update({num : 1})

        return False
    
################################################################
       nums.sort()
       for i in range (0,len(nums)-1) :
            if nums[i]^nums[i+1] == 0 :
                return True
       return False
    