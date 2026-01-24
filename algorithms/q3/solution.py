def count_odd_even(arr):
    even_count = 0
    odd_count = 0

    for i in range(len(arr)):
        if(arr[i]%2 == 0):
            even_count+= 1
        else:
            odd_count+= 1
    return even_count,odd_count

arr = [1,23,4,5,5,66,2,0]
result = count_odd_even(arr)
print("Even count: ",result[0])
print("Odd count: ",result[1])
