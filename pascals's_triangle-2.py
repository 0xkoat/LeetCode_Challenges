numRows = 3


def Row_Completer (row):
    idx = 1
    j =0
    copy = row.copy()
    del row[1:len(row)-1]
    
    while j < len(copy)-1 :
        row.insert(idx ,copy[j]+copy[j+1])
        idx += 1
        j+=1   
    
    return row

row_num = 1

if numRows == 0 :
    print([1])

elif numRows == 1 :
    print([1,1])

else :
    row = [1,1]
    
    while row_num < numRows :
        Row_Completer(row)    
        row_num += 1 
         
    
    print (row)
