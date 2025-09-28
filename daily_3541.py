class Solution:
    def maxFreqSum(self, s: str) -> int:
        
        vowels = ['a' , 'e' , 'i' , 'o' , 'u']
        consonants = ["b","c","d","f","g","h","j","k","l","m","n","p","q","r","s","t","v","w","x","y","z"]
        v_dict ={}
        c_dict = {}

        def maxElementFreq (ch,letters,letter_dict) :
            for i in range (len(ch)) :
                if s[i] in letters :
                    if ch[i] not in letter_dict :
                        letter_dict.update({s[i] : 1})
                    else :
                        letter_dict[s[i]] += 1
                
            if letter_dict != {} :
                max_l = max(letter_dict , key = letter_dict.get)
                return letter_dict[max_l]
            else :
                return 0
        
        
        return maxElementFreq(s,vowels,v_dict) + maxElementFreq(s,consonants,c_dict)