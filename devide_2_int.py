class Solution:
    def divide(self, dividend: int, divisor: int) -> int:

        a = abs(dividend)
        b = abs(divisor)
        quotient = 0
        remainder = a 

        shift = 31
        while shift >= 0 :
            if (b << shift) <= remainder :
                remainder -= (b << shift)
                quotient += (1 << shift)
                
            shift -= 1
        
        if (dividend < 0) != (divisor < 0) :
            quotient = -quotient
        
        return max(-2**31, min(quotient, 2**31 - 1))
      







        
    



                
