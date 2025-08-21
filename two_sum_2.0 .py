class Solution:
    def twosum(self, nums: list[int], target: int)-> list[int]:       
        result = []
        verifier = dict()
        for i in range (0,len(nums)) :                     
            diff = target - nums[i]
            if diff in verifier.keys() and i != verifier[diff] :               
                result = [i,verifier[diff]]
                return
            else : 
             verifier.update({nums[i] : i})
               
                   
          



         




















