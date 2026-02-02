def fibonacci(x):
    a,b = 0,1
    for i in range(x):
        print(a,end = " ")
        a,b = b,a+b

n = int(input("Enter the number till fibonacci series is required: "))
print("The required series is: ")
print(fibonacci(n))    