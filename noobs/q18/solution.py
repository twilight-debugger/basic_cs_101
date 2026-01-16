def greater_than_ten(arr):
    count = 0
    for i in range(0,len(arr)):
        if(arr[i]>10):
            count+= 1
    return count

lst = [10,20,30,40]
print(greater_than_ten(lst))