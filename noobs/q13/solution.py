def digit(n):
    if(n>=0 and n<=9):
        print("Digit")
    else:
        print("Not a digit")

x = int(input("Enter the number: "))
result = digit(x)
print(result)