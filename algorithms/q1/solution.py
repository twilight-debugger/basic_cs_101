def array_sum(arr):
    sum = 0
    for i in range(len(arr)):
        sum+= arr[i]
    return sum

ls = [1,2,3,4,5]
result = array_sum(ls)
print(result)