def shuffling_array(nums, n):
    result = []
    for i in range(len(nums)):
        if i % 2 == 0:
            result.append(nums[i // 2])
        else:
            result.append(nums[n + i // 2])
    return result

arr = [1,2,3,4,5,6,7,8,9,10]
n = len(arr) // 2
print("The shuffled array is:", shuffling_array(arr, n))