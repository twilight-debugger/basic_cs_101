def array_sorted(arr):
    for i in range(0,len(arr)):
        if(arr[i] < arr[i-1]):
            return False

    return True

arr = [1,2,3,4,5]
print("Checking if array sorted:",array_sorted(arr))