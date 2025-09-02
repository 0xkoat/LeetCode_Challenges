class Solution:
    def convert(self, s: str, numRows: int) -> str:
        
        letter_rows = {} 
        rows =[]
        
        if numRows > len(s) :
            numRows = len(s)
        
        for i in range(1,numRows+1) :
            rows.append(i)
        rows_r = rows[::-1]
        final_rows = rows + rows_r[1:-1]

        i = 0
        for letter in s :
            if final_rows[i] not in letter_rows :
                letter_rows.update({final_rows[i] : letter})
            else :
                letter_rows[final_rows[i]] += letter
           
            i += 1
            if i == len(final_rows) :
                i = 0
        
        result = ""
        for i in range (1,numRows+1) :
            result += letter_rows[i]
        
        return result
        

        
       

        
        




        




        
        