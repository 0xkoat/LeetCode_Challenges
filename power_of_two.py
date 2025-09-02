class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        
        power = 0
        while 2**(power)<= n :
            power += 1   
        power -= 1

        counter = 0
        sum = 0
        for i in range (power , -1 , -1) :
            if (sum + 2**i) <= n :
                sum += 2**i
                counter += 1 
        
        return counter == 1
        
        
        