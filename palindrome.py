class Solution:
    def isPalindrome(self, x: int) -> bool:
        num = x
        rev_num = 0
        if x < 0 :
            return False
        else :
            while x  > 0 :
                y = x % 10
                rev_num = rev_num*10 + y 
                x = x // 10

            if rev_num == num :
                return True
            else:
                return False 
    
