def largest(arr):

    if(len(arr) == 0):
        return -1

    large = arr[0]
    for i in range(0,len(arr)):
        if(arr[i] > large):
            large = arr[i]
    return large       

arr = [1,2,3,4,8,8]
print("The largest integer in the array is:",largest(arr))