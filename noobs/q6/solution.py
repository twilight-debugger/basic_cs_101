def exist(k,x):
    for i in k:
        if(i==x):
            print(i)
print("Element does not exist in the array")

n = [1,2,3,4,5,6,7]
x = 9
result = exist(n,x)
print(result)