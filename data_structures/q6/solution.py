def reverseArray(arr,n):
    left = 0
    right = n-1
    temp = 0
    while(left < right):
        temp = arr[left]
        arr[left] = arr[right]
        arr[right] = temp
        left+=1
        right-=1
    return arr

main_arr = [10,9,8,7,6,5,4,3,2,1]
print(reverseArray(main_arr, len(main_arr)))