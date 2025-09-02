class Solution:
    def isHappy(self, n: int) -> bool:

        seen_results ={}

        
        def totalSum (num) :
            result = 0
            num_str = str(num)
            for bit in num_str :
                result += (int(bit))**2
            
            return result
        
        while True :
            n = totalSum(n)
            if n == 1 :
                return True
            elif n not in seen_results :
                seen_results.update({n : 1})
            else :
                return False

            
            
        


                




    
