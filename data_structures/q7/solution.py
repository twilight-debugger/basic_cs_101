def secondLargest(arr):
    if(len(arr) < 2): 
        return -1
    largest = float('-inf')
    second = float('-inf')
    num = 0
    
    for i in arr:
        if(i > largest):
            second = largest
            largest = i
        
        elif(largest > num > second):
            second = num
    if(second == float('inf')):
        return -1
    return second

arr = [1,2,4,5]
print("Second largest nnumber is: ",secondLargest(arr))
