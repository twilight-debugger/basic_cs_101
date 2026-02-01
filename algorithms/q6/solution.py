def factorial(x):
    fact = 1
    if(x<=0):
        return 0
    for i in range(1,x):
        fact*=i
    return fact

y = int(input("Enter any number: "))
result = factorial(y)
print(result)