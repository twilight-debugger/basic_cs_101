def countDigit(num):
    count = 0
    if(num == 0):
        return 1

    if(num < 0):
        num = -num
    
    while(num!=0):
        count+=1
        num = num // 10
    
    return count

y = int(input("Enter the number: "))
print(countDigit(y))