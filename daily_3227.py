class Solution:
    def doesAliceWin(self, s: str) -> bool:
        vowels = ['a' , 'e' , 'i' , 'o' , 'u']     
        vowels_counter = 0
        
        for i in range (0 , len(s)) :
            if s[i] in vowels :
                vowels_counter += 1
        
        if vowels_counter == 0 :
            return False
        else :
            return True
            



            

        




        