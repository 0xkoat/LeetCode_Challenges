class Solution:
    def reverse(self, x: int) -> int:
        
        power = 0 
        while 10**power <= abs(x) :
            power += 1
        power -= 1


        l = 10
        m = 1
        sum = 0
        for i in range (power , -1 , -1) :
            sum += (((abs(x) % l) // m ) * (10**i))
            l = l*10
            m = m*10
        if x < 0 :
            sum = -sum
       
        if  ((2**31) - 1) >= sum >= -(2**31) :
            return sum
        else :
            return 0
