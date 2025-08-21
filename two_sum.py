class Solution:
    def twosum(self, nums: list[int], target: int)-> list[int]:       
     result = []
     verifier = dict()
     for i in range (0,len(nums)) :                     
            diff = target - nums[i]
            if diff in verifier.keys() and i != verifier[diff] :               
                result = [verifier[diff],i]
                print("match found: ", verifier[diff], i)
                return result
            else : 
             verifier.update({nums[i] : i})
     return []        
       
def input_verifier():
    nums = input("give numbers  ").split()
    num1 = []
    for i in nums :
        num1.append(int(i))
       
    test1 = False

    if 2 <= len(num1) <= 10**4 :
        test1 = all(-10**9 <= j <= 10**9 for j in num1)
        
    target = input("give target  ")
    target1 = int(target)

    test2= -10**9 <= target1 <= 10**9

    if test1 and test2 :
        return num1, target1
    else:
        return None,None
    
nums,target = input_verifier()
if nums is not None :
    sol = Solution()
    result = sol.twosum(nums, target)
    print("result: ", result)
else :
    print("bara zamer")

        
    
    
        
         



            

        
            
        










    
       
