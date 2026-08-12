def sum_array(arr):
    sum = 0
    for i in range(0,len(arr)):
        sum += arr[i]
    return sum

arr = [1,2,3]
print("The sum of array is:", sum_array(arr))