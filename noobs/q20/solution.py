def multiplication(a,b):
    if(a == 0 or b == 0):
        return 0

    total = 0
    for i in range(b):
        total+= a
    return total

x,y = 5,6
print(multiplication(x,y))