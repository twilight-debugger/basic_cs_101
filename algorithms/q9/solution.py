def ocurrence(arr,value):
    repetition = 0
    for i in range(len(arr)-1):
        if(arr[i] == value):
            repetition+=1
    return repetition


arr = [1,2,32,1,1,3,4,45,0]
x = int(input("Enter the value: "))
print("Number of times value being repeated is: ",ocurrence(arr,x))
