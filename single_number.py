class Solution:
    def singleNumber(self, nums: int) -> int:
        
        result = nums[0]
        for num in nums[1:len(nums)] :
            result = result^num

        return result
        
        

     