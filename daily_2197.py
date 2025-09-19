class Solution:
    def replaceNonCoprimes(self, nums: int) -> int:

        def coprime_verifier(x , y) :
            
            dividend = max(x,y)
            divisor = min(x,y)
            remainder = divisor
            
            while dividend % divisor != 0 :
                remainder = dividend % divisor
                dividend = divisor
                divisor = remainder
            
            return remainder
             
        result = []
        for num in nums :
            result.append(num)
            while len(result) > 1 :
                gcd = coprime_verifier(result[-1],result[-2])
                if gcd == 1 :
                    break
                else :
                    result[-2] = (result[-1]*result[-2]) // gcd
                    del result[-1]
        return result

                    

        

               

            
        

        
            

            


        