class Solution:
    def maxArea(self, height: int) -> int:
        
        b = 0
        e = len(height)-1  
        begin = height[b]
        end = height[e]
        result = (e - b) * min(begin , end)
       
        while (e - b >= 1) and (begin != end) :
            if begin < end :
                b += 1
                begin = height[b]
            
            else :
                e -= 1
                end = height[e]
                
            if ((e - b) * min(begin,end)) > result :
                result = (e - b) * min(begin,end)
        
        return result


            


            

       


    

