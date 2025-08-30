class Solution:
    def letterCombinations(self, digits: str) -> str:
        phone_map = {
            "2": "abc", "3": "def", "4": "ghi", "5": "jkl",
            "6": "mno", "7": "pqrs", "8": "tuv", "9": "wxyz"}
        
        final = []
        if digits == "" :
            return final
       
        def visit(index , result) :
            if index == len(digits) :
                final.append(result)
                return
            
            current = digits[index]
            for letter in phone_map[current] :
                visit(index + 1 , result + letter)
        
        visit(0,"")
        return final

          

           




            





            