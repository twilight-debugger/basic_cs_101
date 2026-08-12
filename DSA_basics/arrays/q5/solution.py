def count_occurrence(arr,target):
    count = 0
    for i in arr:
        if(i == target):
            count += 1
    return count

arr = [1,2,4,6,5]
print("The occurrence of target integer is:", count_occurrence(arr,5))