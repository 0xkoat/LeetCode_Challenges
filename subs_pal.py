class Solution:
    def longestPalindrome(self, s: str) -> str:
        if not s:
            return ""
        T = "^#" + "#".join(s) + "#$"
        n = len(T)
        P = [0] * n  

        center = right = 0
        for i in range(1, n - 1):
            mirror = 2 * center - i  

           
            if i < right:
                P[i] = min(right - i, P[mirror])

           
            while T[i + P[i] + 1] == T[i - P[i] - 1]:
                P[i] += 1

            
            if i + P[i] > right:
                center, right = i, i + P[i]
       
        max_len = max(P)
        center_index = P.index(max_len)
        start = (center_index - max_len) // 2  
        
        return s[start:start + max_len]


