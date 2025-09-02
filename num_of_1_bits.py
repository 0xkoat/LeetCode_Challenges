class Solution:
    def hammingWeight(self, n: int) -> int:
        a = bin(n)[2:]
        counter = 0
        for i in range (0,len(a)) :
            if ((int(a[i])) & (int(a[i]))) == 1 :
                counter += 1
        return counter
 
     
        