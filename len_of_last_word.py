class Solution:
    def lengthOfLastWord(self, s: str) -> int:
       i = len(s)-1
       while s[i] == " ":
         i = i-1 
        
       n = i 
        
       while s[i] != " " and i >= 0:
            i = i -1 
        
       return len(s[i+1: n+1])
    
##############################################
words = []
counter = 0 
 

        