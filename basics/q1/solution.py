def swap(a,b):
     temp = a
     a = b
     b = temp

     return(a,b)

x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
print("Before swap: ",x,y)
print("After swap: ",swap(x,y))