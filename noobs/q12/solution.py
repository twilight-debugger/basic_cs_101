def change(arr):
    for i in range(len(arr)):
        if(arr[i] < 0):
            arr[i] = 0
    return arr

ls = [-1, 9, 8]
result = change(ls)
print(result)