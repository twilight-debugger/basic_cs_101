def prime(x):
    if(x % 2 == 0):
        return "Not prime"
    else:
        return "Prime"

y = int(input("Enter the number: "))
result = prime(y)
print(result)