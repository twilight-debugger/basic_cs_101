def twoSum(nums,target):
    n = len(nums)
    for i in range(n):
        for j in range(i+1,n):
            if(nums[i] + nums[j] == target):
                return [i,j]

arr = [3,2,4,2]
target_int = 6
print(twoSum(arr,target_int))