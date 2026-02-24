def harshad_no(x):
    sum = 0
    temp = x

    while(temp != 0):
        digit = temp % 10
        sum += digit
        temp /= 10
    if(x % sum == 0):
        return sum
    else:
        return -1

y = int(input("Enter the number: "))
print(harshad_no(y))