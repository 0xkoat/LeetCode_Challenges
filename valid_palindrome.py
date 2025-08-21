class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        def str_reader (ch,x,y) :
            while not ch[x].isalnum() and x<y :
                x += 1
            
            while not ch[y].isalnum() and x<y :
                y -= 1
            
            return x ,y, ch[x].lower() == ch[y].lower() 

            
        x = 0
        y = len(s)-1

        while x < y :
            x,y,result = str_reader (s,x,y)
            if not result  :
                return False
            else :
                x += 1
                y -= 1    
            
        return True

               

        



            

            
            
