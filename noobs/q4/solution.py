def smallest(a,b,c):
    if(a<b and a<c):
        return a
    elif(b<a and b<c):
        return b
    elif(c<a and c<b):
        return c
    else:
        print("All are same")

x = 0
y = 0
z = 0
result = smallest(x,y,z)
print(result)