class Solution:
    def spellchecker(self, wordlist: list[str], queries: list[str]) -> list[str]:
        
        def vowel_replacor(word):
            word = list(word.lower())
            for j in range(len(word)):
                if word[j] in 'aeiou':
                    word[j] = '*'
            return ''.join(word)

        exact_words = set(wordlist)
        case_dict = {}
        vowel_dict = {}

        for word in wordlist:
            lword = word.lower()
            if lword not in case_dict:
                case_dict[lword] = word
            
            vword = vowel_replacor(word)
            if vword not in vowel_dict:
                vowel_dict[vword] = word

        result = []
        for q in queries:
            if q in exact_words:
                result.append(q)
            elif q.lower() in case_dict:
                result.append(case_dict[q.lower()])
            elif vowel_replacor(q) in vowel_dict:
                result.append(vowel_dict[vowel_replacor(q)])
            else:
                result.append("")
        
        return result


    
                

            
            

            
        


        



