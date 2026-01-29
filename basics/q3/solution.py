def sumofDigits(num):
    sum = 0
    if(num == 0):
        return 0
    while(num!=0):
        digit = num % 10
        sum+= digit
        num = num // 10
    return sum

x = int(input("Enter the number: "))
print(sumofDigits(x))