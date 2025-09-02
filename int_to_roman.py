class Solution:
    def intToRoman(self, num: int) -> str:
        roman_symbols = {
            1: "I", 5: "V", 10: "X", 50: "L",
            100: "C", 500: "D", 1000: "M",
            4: "IV", 9: "IX", 40: "XL", 90: "XC",
            400: "CD", 900: "CM"
        }
        
        power = 0
        while 10**power <= num:
            power += 1
        power -= 1
        
        result = ""
        
        for i in range(power, -1, -1):
           
            devider = 10**i
            digit = num // devider
            num = num % devider
            
            if digit in [4,5,9]:
                result += roman_symbols[digit*devider]
            
            elif digit > 5:
                result += roman_symbols[5*devider]
                result += roman_symbols[devider] * (digit-5)
            
            else:
                result += roman_symbols[devider] * digit
        
        return result

    
                



            
        


