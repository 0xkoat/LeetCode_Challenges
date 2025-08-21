class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        j = -1
           
        while j <= (len(haystack) - len(needle) ) :
           

            if haystack[j:j + len(needle)] == needle :
                return j
           
            elif j ==  len(haystack) - len(needle)  and haystack[j:j + len(needle)] != needle : 
                return -1 
            
            else : j += 1
        
        return j
        
