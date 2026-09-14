class Solution:
    def fractionToDecimal(self, numerator: int, denominator: int) -> str:

        if numerator % denominator == 0 :
            return str(numerator // denominator)
        
        result = []
        if(numerator < 0) ^ (denominator < 0) :
            result.append("-")

        numerator , denominator = abs(numerator) , abs(denominator)

        result.append(str(numerator // denominator))
        result.append(".")

        remainder = numerator % denominator
        seen = {}

        while remainder != 0 :
            if remainder in seen :
                index = seen[remainder]
                result.insert(index, "(")
                result.append(")")
                break

            seen[remainder] = len(result)
            remainder *= 10
            result.append(str(remainder // denominator))
            remainder %= denominator
        
        return "".join(result)
        
        
    


        


        
    
        
