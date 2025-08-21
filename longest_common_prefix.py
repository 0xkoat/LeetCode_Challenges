class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs :
            return ""
        
       
        
        short = strs[0]        
        
        for i in range (0,len(strs)) :
            if len(strs[i]) < len(short) : 
                short = strs [i]
               
        prefix = ""
        ch = ""

        for i in range (0,len(short)) :
            ch = short[i]
            ch_v = ""
            for j in range (0,len(strs)) :
                if strs[j][i]== ch :
                    ch_v += ch
            
            if len(ch_v) != len(strs) :
                return prefix
            else :
                prefix += ch

        return prefix

####################################       

class Node : 
    def __init__(self , val , nodes , nb):
        self.val = val
        self.nb = nb
        self.children = {}
        for node in nodes :
            self.children[node.val] = node 

    def add_string(node, s):
        if len(s) == 0 :
            return
        if node.children.get(s[0]) is None :
            node.children[s[0]] = Node (s[0], [] ,0)
        node.children.get(s[0]).nb += 1
        add_string(node.children.get(s[0]) , s[1:]) 


class Solution :
    def longestCommonPrefix(self, strs : list[str]) -> str :
        trie = Node("",[], len(strs))
        for s in strs :
            add_string(trie,s)
        pref=""
        node = trie
        while len(node.children) == 1 and node.nb == len(strs):
            pref += node.val
            item = list(node.children.keys())[0]
            node = node.children[item]

        if node.nb == len(strs):
            pref += node.val

        return pref

        


         


        


            






            
            
         
                        
                
                        


            
                 


        


    

        

    
        
               
            
        

