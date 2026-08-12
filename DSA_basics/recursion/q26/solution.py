def fibonacci(n):
    if(n <= 1):
        return n

    return fibonacci(n-1) + fibonacci(n-2)

sample = int(input("Enter the value of n:"))
print("The", sample, "th Fibonacci number is:", fibonacci(sample))