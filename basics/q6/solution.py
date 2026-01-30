def add(a,b):
    return a+b

def subtract(a,b):
    if(a>b):
        return a-b
    else:
        return b-a

def multiplication(a,b):
    return a*b

def division(a,b):
    if(a>b):
        return a//b
    else:
        return b//a

x = int(input("Enter the first number: "))
y = int(input("Enter the second number: "))

print("\nChoose the operation to be performed")
print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

choice = int(input("Enter your choice: "))

if choice == 1:
    print("Result =", add(x, y))

elif choice == 2:
    print("Result =", subtract(x, y))

elif choice == 3:
    print("Result =", multiplication(x, y))

elif choice == 4:
    print("Result =", division(x, y))

else:
    print("Invalid choice")