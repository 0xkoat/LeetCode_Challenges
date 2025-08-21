class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {"I" : "1", "V" : "5" , "X" : "10" , "L" : "50" ,
                  "C" : "100" , "D" : "500" , "M" : "1000"}
        
        exceptions = ["IV" , "IX" , "XL" , "XC", "CD" , "CM"]

        roman_exceptions = {"IV" : "4" , "IX" : "9" , "XL" : "40" , "XC" : "90",
                            "CD" : "400" , "CM": "900"}
        
        i=0
        total = 0
        while i < len(s) :
            ch_v=""            
            if i < len(s) - 1 :
             ch_v = s[i] + s[i+1]
            
            if ch_v in exceptions :                
                total += int(roman_exceptions[ch_v])
                i += 2
            else :                
                total += int(roman[s[i]])
                i += 1

        return total        



            
