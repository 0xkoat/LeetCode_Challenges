class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        words_list = list(text.split())
        counter = 0
        
        if brokenLetters == "" :
            return len(words_list)
        elif len(brokenLetters) == 26 :
            return 0 
        else :
            for word in words_list :
                error = 0
                for l in brokenLetters :
                    if l in word :
                        error += 1
                if error == 0 :
                    counter += 1
        
        return counter
  
     
