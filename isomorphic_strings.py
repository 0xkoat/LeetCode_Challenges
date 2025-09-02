class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mapped_letters ={}
        for i in range(0,len(s)) :
            if s[i] not in mapped_letters and t[i] not in mapped_letters.values() :
                mapped_letters.update({s[i] : t[i]})
            
            elif s[i] not in mapped_letters and t[i]  in mapped_letters.values() :
                return False
            
            elif s[i] in mapped_letters and mapped_letters[s[i]] != t[i] :
                return False   
        
        return True