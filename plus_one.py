digits = [1,2,3]

sum_str = ""
for i in range (0,len(digits)):
     sum_str += str(digits[i])
       
sum_int = int(sum_str) + 1
sum_str = str(sum_int)

for i in range (0,len(sum_str)) :
    if i < len(digits) :
        digits[i] = int(sum_str[i])
    else :
        digits+= (int(sum_str[i]))

print (digits)