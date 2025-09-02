class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()
        if not s :
            return 0
        
        sign = 1
        i = 0
        if s[i] in ["+","-"] :
            if s[i] == '-' :
                sign = -1
            i += 1
        
        result = 0
        while i < len(s) and s[i].isdigit() :
            result = result*10 + int(s[i])
            i += 1
        result *= sign

        if result < -2**31 :
            return -2**31
        elif result > 2**31 - 1 :
            return 2**31 - 1
        
        return result
            


        
    
       
        
        
    
