class Solution:
    def summaryRanges(self, nums: int) -> str:

        i = 0
        result = []
        while i < len(nums) :
            j = i
            while (i < len(nums) -1 ) and (nums[i] == nums[i+1] -1) :
                i += 1
            if i != j :
                result.append(f"{nums[j]}->{nums[i]}")
            else :
                result.append(f"{nums[j]}")
            
            i += 1

        return result

            

            

        

