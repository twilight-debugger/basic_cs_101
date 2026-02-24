def running_sum(nums):
    for i in range(1,len(nums)):
        nums[i] += nums[i-1]

    return nums

arr = [1,2,3,4,5]
print(running_sum(arr))