def reverse(num):
    rev = 0
    while(num!=0):
        digit = num % 10
        rev = rev * 10 + digit
        num = num // 10

    return rev

x = int(input("Enter the number: "))
print(reverse(x))
