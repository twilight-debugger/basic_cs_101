def factorial(x):
    fact = 1
    for i in range(1,x):
        fact*=i
    return fact

y = int(input("Enter any number: "))
result = factorial(y)
print(result)