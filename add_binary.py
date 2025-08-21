a = "11"
b="1"

n = -1
sum = 0
i = len(a)
       
while i!=0 :
    i -= 1          
    n += 1
    sum += ((int(a[i])) * (2**n ))
        
n = -1
i = len(b)
       
while i!=0 :
    i -= 1          
    n += 1
    sum += ((int(b[i]) * (2**n )))

if sum == 0 :
    print (0) 


n = 0
while (2 ** n) < sum :
    n = n + 1

if 2**n > sum :
    n = n-1


test = 0
result = ""


while (test < sum) :
    if  (test + ( 2 ** n )) <= sum :
        test = test + ( 2**n )
        result = result + "1"
        n = n - 1
   
    elif test < sum  : 
        result = result +  "0"
        n = n - 1


while n >= 0 : 
    result = result +  "0"
    n = n - 1

print(result)

    


        

        
        






