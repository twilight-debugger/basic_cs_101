def smallest(arr):
    if(len(arr) == 0):
        return -1
    
    small = arr[0]
    for i in range(0,len(arr)):
        if(arr[i] < small):
            small = arr[i]
    return small

arr = [0,9,1,0,-2]
print("The smallest integer is:",smallest(arr))
    