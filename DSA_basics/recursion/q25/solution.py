def factorial(x):
    fact = 1
    for i in range(1,x+1):
        fact *= i
    return fact

y = 100
print("The factorial of the given number is:",factorial(y))