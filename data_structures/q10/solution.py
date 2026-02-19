def duplicateElements(arr):
    arr.sort()
    found = False

    for i in range(len(arr)):
        if(arr[i] == arr[i-1]):
            print(arr[i],end =" ")
            found = True

            while(i < len(arr) and arr[i] == arr[i-1]):
                i+=1

    if not found:
        print("None")

arr = [1,3,2,1,2,4]
print("The repeating elements are: ",end = " ")
duplicateElements(arr)