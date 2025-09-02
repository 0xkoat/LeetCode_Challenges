class Solution:
    def reverseBits(self, n: int) -> int:
        
        power = 0
        while 2**(power)<= n :
            power += 1   
        power -= 1

        bit_str = ""
        sum = 0
        for i in range (power , -1 , -1) :
            if (sum + 2**i) <= n :
                sum += 2**i
                bit_str = "1" + bit_str
            else :
                bit_str = "0" + bit_str
        
        while len(bit_str) < 32 :
            bit_str += "0"
        
        result = 0
        power = 31 
        for num in bit_str :
            result += ((int(num)) * (2**power))
            power -= 1
        
        return result


    
   
        
            



            
            

            



