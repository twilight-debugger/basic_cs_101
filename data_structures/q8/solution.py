def check_sorted(arr):
    for i in range (len(arr)):
        if(arr[i] > arr[i+1]):
            return 0
    return 1

arr = [1,34,3.34,2]    
print(check_sorted(arr))   