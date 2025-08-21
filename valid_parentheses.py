class Solution:
    def isValid(self, s: str) -> bool:
         
     signs = ['(' , ')' , '[' , ']' , '{' , '}' ]
     signs_o = ['(' , '[' , '{']
     signs_c = [ ')' , ']' , '}']
     comp ={ ")" : "(" , "]" : "[" , "}" : "{" }
     
     if len(s) % 2 == 1 :
       return False
     
     for i in range (0,len(s)) :
        if s[i] not in signs:
           return False

     ch = ""

     for i in range (0,len(s)) :
        if s[i] in signs_o :
           ch = s[i] + ch 
        elif s[i] in signs_c :
           if ch != "" and  comp[s[i]] == ch[0] :
              ch = ch.replace(ch[0] , "" , 1)
           else :
              return False

     if ch == "" : 
        return True
     else : 
        return False
              
              



     
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

        
            
          
             

          
       
       
       
        
     
        
    




