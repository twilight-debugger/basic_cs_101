def largest_in_array(arr):
    maxVal = arr[0]
    for i in range(len(arr)):
        if(arr[i] > maxVal):
            maxVal = arr[i]
    return maxVal

ls = [0,2,3,4,4,5,98]
print(largest_in_array(ls))
