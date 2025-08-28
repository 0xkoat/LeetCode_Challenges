class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        seen_letters = {}
        counter , result, i , pointer = 0 , 0 , 0 , 0

        while i < len(s) :
            if s[i] not in seen_letters :
                counter += 1
                seen_letters.update({s[i] : 0})
                i += 1
                if counter > result :
                    result = counter
            
            else :
                seen_letters.clear()
                begin = s[pointer:i].index(s[i]) + pointer + 1
                pointer = begin
                i = begin
                counter = 0
                     
        return result
            
            


        







        
 