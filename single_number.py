class Solution:
    def singleNumber(self, nums: int) -> int:
        checker = {}
        for i in range (0,len(nums)) :
            if nums[i] not in checker :
                checker.update({nums[i] : 1})
            else : 
                checker[nums[i]] += 1
        
        value_to_find = 1
        for key , value in checker.items() :
            if value == value_to_find :
                return key