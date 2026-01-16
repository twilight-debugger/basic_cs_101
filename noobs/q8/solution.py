def count_zero(arr):
    count = 0
    for i in arr:
        if(i == 0):
            count +=1
            continue
        
        while(i>0):
            if(i%10 == 0):
                count +=1
            i//=10
    return count

arr = [0,101010203040,0]
print (count_zero(arr))
        
            