def luckyInt(arr):
    from collections import Counter 

    freq = Counter(arr)
    lucky = -1

    for num , count in freq.items():
        if(num == count):
            lucky = max(lucky,num)
    return lucky

arr = [1,2,2,4,5]
print("The lucky integer is: ",luckyInt(arr))