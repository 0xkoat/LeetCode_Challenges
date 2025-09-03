class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        result = ""
        while columnNumber > 0:
            columnNumber -= 1
            a = (columnNumber % 26) + 1
            result = chr(a+64) + result
            columnNumber = columnNumber// 26

        return result
        
   

            
        


