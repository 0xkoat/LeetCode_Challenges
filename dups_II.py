class Solution:
    def containsNearbyDuplicate(self, nums: int, k: int) -> bool:
        found_nums={}
        i = -1
        while i < len(nums) - 1 :
            i += 1
            if nums[i] not in found_nums :
                found_nums.update({nums[i] , i})
            elif abs(i - found_nums[nums[i]]) <= k :
                return True
            else : 
                found_nums[nums[i]] = i
        
        
        return False
                

                
                

        
