numRows = 5
result = []

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

row_num = 2

if numRows == 0 :
    print(result)

elif numRows == 1 :
    print([1])

else :
    row = [1,1]
    result.insert (0 ,[1]) 
    result. insert (1 ,[1,1])
    while row_num < numRows :
        Row_Completer(row)
        result.insert (row_num ,row.copy())    
        row_num += 1 
         
    
    print (result)


#######################################################

def row_completer(row):
    copy = row.copy()
    result = [copy[0]]
    
    for j in range(len(copy) - 1):
        result.append(copy[j] + copy[j + 1])
    
    result.append(copy[-1])
    return result

## Baad staamalha like this
row = row_completer(row) 

        




    
