class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if s + t == s + s :
            return True
        
        checker = {}
        for letter in s :
            if letter not in checker :
                checker.update({letter : 1})
            else :
                checker[letter] += 1
        
        for letter in t :
            if (letter not in checker ) or (checker[letter] == 0) :
                return False
            else : 
                checker[letter] -= 1
                if checker[letter] == 0 :
                    del checker[letter]
        
        return checker == {}




   